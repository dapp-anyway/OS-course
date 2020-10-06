#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main() {

    for (int i = 0; i < 10; i++) {
        int size = 1024*1024*10;
        int *a = (int *) malloc(size);
        memset(a, 0, size);
        sleep(1);
    }
}

// Si and So gradually increased and after the end of the work returned to their original state