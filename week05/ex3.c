#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

pthread_mutex_t mutex;
pthread_cond_t cons;
pthread_cond_t prod;
int strg = 0;
int count = 1;

void *consumer(void *a) {
    while (1) {
        while (strg == 0) pthread_cond_wait(&cons, &mutex);
        count--;
        strg = count;
        printf("Consumed: %d\n", strg);
        pthread_cond_signal(&prod);
    }
}

void *producer(void *a) {
    while (1) {
        while (strg == 200) pthread_cond_wait(&prod, &mutex);
        count++;
        strg = count;
        printf("Produced: %d\n", count);
        pthread_cond_signal(&cons);
    }
}

int main() {
    pthread_t pros_t;
    pthread_t cons_t;
    pthread_cond_init(&cons, 0);
    pthread_cond_init(&prod, 0);
    pthread_create(&cons_t, 0, consumer, 0);
    pthread_create(&pros_t, 0, producer, 0);
    pthread_join(pros_t, 0);
    pthread_join(cons_t, 0);
    pthread_cond_destroy(&cons);
    pthread_cond_destroy(&prod);
}