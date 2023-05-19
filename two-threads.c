#include <stdio.h>
#include <pthread.h>

// Function executed by the first thread
void* threadFunction1(void* arg) {
    printf("Thread 1 is running.\n");
    // Perform some task
    // ...
    printf("Thread 1 finished.\n");
    return NULL;
}

// Function executed by the second thread
void* threadFunction2(void* arg) {
    printf("Thread 2 is running.\n");
    // Perform some task
    // ...
    printf("Thread 2 finished.\n");
    return NULL;
}

int main() {
    pthread_t thread1, thread2;

    // Create the first thread
    if (pthread_create(&thread1, NULL, threadFunction1, NULL) != 0) {
        printf("Error creating thread 1.\n");
        return 1;
    }

    // Create the second thread
    if (pthread_create(&thread2, NULL, threadFunction2, NULL) != 0) {
        printf("Error creating thread 2.\n");
        return 1;
    }

    // Wait for both threads to finish
    if (pthread_join(thread1, NULL) != 0) {
        printf("Error joining thread 1.\n");
        return 1;
    }

    if (pthread_join(thread2, NULL) != 0) {
        printf("Error joining thread 2.\n");
        return 1;
    }

    printf("Both threads have finished.\n");
    return 0;
}
