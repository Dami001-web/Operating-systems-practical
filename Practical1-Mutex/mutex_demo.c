#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define NUM_THREADS 10

int counter = 0;
pthread_mutex_t mutex;

void *increment(void *arg) {
    pthread_mutex_lock(&mutex);

    int temp = counter;
    temp++;
    counter = temp;

    pthread_mutex_unlock(&mutex);

    pthread_exit(NULL);
}

int main() {
    pthread_t threads[NUM_THREADS];

    pthread_mutex_init(&mutex, NULL);

    for (int i = 0; i < NUM_THREADS; i++) {
        pthread_create(&threads[i], NULL, increment, NULL);
    }

    for (int i = 0; i < NUM_THREADS; i++) {
        pthread_join(threads[i], NULL);
    }

    printf("Final Counter = %d\n", counter);

    pthread_mutex_destroy(&mutex);

    return 0;
}
