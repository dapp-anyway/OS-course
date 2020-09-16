#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

pthread_cond_t cons;
pthread_cond_t prod;

pthread_mutex_t mutex;

int strg;
int cnt;

void *consumer(void *a) {
    while (1) {
        while (strg == 0) pthread_cond_wait(&cons, &mutex);
        strg = --cnt;
        printf("Consumed: %d\n", strg);
        pthread_cond_signal(&prod);
    }
}

void *producer(void *a) {
    while (1) {
        while (strg == 200) pthread_cond_wait(&prod, &mutex);
        strg = ++cnt;
        printf("Produced: %d\n", cnt);
        pthread_cond_signal(&cons);
    }
}

int main() {
    strg = 0;
    cnt = 1;

    pthread_t pros_t;
    pthread_t cons_t;

    pthread_cond_init(&cons, 0);
    pthread_cond_init(&prod, 0);

    pthread_create(&cons_t, 0, consumer, 0);
    pthread_create(&pros_t, 0, producer, 0);

    pthread_join(pros_t, 0);
    pthread_join(cons_t, 0);
}