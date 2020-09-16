#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void *newThread(void *a) {
    int *local_id = (int *) a;
    printf("Thread ID: %d \n", *local_id);
    pthread_exit(0);
}

int main() {
    pthread_t id;
    int n = 5;
    for (int i = 0; i < n; i++) {
        pthread_create(&id, NULL, newThread, &i);
        printf("Created thread\n");
        pthread_join(id,NULL);
    }
    pthread_exit(NULL);
    return 0;
}

/*
Output:
Created thread
Thread ID: 0
Created thread
Thread ID: 1
Created thread
Thread ID: 2
Created thread
Thread ID: 3
Created thread
Thread ID: 4
 */

