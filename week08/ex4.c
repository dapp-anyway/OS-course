#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/resource.h>
#include <stdio.h>

int main() {

    for (int i = 0; i < 10; i++) {
        int size = 1024*1024*10;
        int *a = (int *) malloc(size);
        memset(a, 0, size);
        struct rusage usage;
        int b = getrusage(0, &usage);
        printf("%ld\n", usage.ru_maxrss);
        sleep(1);
    }
}