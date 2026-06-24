# Operating-systems-practical
Operating Systems practical assignments covering mutexes, semaphores, producer-consumer synchronization, and shared memory implementation in C.
Operating Systems Practicals

Student Information
	•	Name: Idam Emmanuel Oko
	•	Reg. no.: 2023514001
	•	Assignment: Practical Sessions on Synchronization and Inter-Process Communication


Overview

This repository contains implementations of four Operating Systems practical sessions covering:
	1.	Mutex Lock Demonstration
	2.	Producer-Consumer Simulation
	3.	Semaphore Implementation in C
	4.	Shared Memory Programming

These practicals demonstrate thread synchronization, mutual exclusion, semaphores, and inter-process communication using C programming in a Linux/POSIX environment.



Practical Session 1: Mutex Lock Demonstration

Objective

To demonstrate mutual exclusion using POSIX thread mutex locks.

Concepts Covered
	•	Multithreading
	•	Shared resources
	•	Race conditions
	•	Mutex locks

Files
	•	mutex_demo.c

Compilation
gcc mutex_demo.c -o mutex_demo -lpthread

Execution
./mutex_demo


Practical Session 2: Producer-Consumer Simulation

Objective

To implement the Producer-Consumer problem using POSIX semaphores.

Concepts Covered
	•	Semaphores
	•	Producer-Consumer synchronization
	•	Circular buffer
	•	Resource sharing

Files
	•	producer_consumer.c

Compilation
gcc producer_consumer.c -o producer_consumer -lpthread
Execution
./producer_consumer


Practical Session 3: Semaphore Implementation in C

Objective

To compare semaphore-based synchronization with mutex-based synchronization.

Concepts Covered
	•	Binary semaphore
	•	Critical section protection
	•	Thread synchronization

Files
	•	semaphore_counter.c

Compilation
gcc semaphore_counter.c -o semaphore_counter -lpthread
Execution
./semaphore_counter


Practical Session 4: Shared Memory Programming

Objective

To demonstrate inter-process communication using shared memory.

Concepts Covered
	•	Shared memory
	•	IPC (Inter-Process Communication)
	•	Process synchronization

Files
	•	shared_memory.c

Compilation
gcc shared_memory.c -o shared_memory
Execution
./shared_memory



Technologies Used
	•	C Programming Language
	•	POSIX Threads (pthreads)
	•	POSIX Semaphores
	•	System V Shared Memory
	•	GCC Compiler


Author

Idam Emmanuel Oko
2023514001

Operating Systems Practical Assignment
