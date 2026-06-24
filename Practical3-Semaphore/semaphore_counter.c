#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>

#define THREADS 10

int counter = 0;
sem_t semaphore;

void *increment(void *arg) {

    sem_wait(&semaphore);

    counter++;

    sem_post(&semaphore);

    return NULL;
}

int main() {
    pthread_t tid[THREADS];

    sem_init(&semaphore, 0, 1);

    for (int i = 0; i < THREADS; i++) {
        pthread_create(&tid[i], NULL, increment, NULL);
    }

    for (int i = 0; i < THREADS; i++) {
        pthread_join(tid[i], NULL);
    }

    printf("Counter = %d\n", counter);

    sem_destroy(&semaphore);

    return 0;
}
