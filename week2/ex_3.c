//
// Created by dappa on 25.08.2020.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    char *a = argv[1];
    int n = atoi(a);

    int len = (n - 1) * 2 + 1;
    for (int i = 0; i < n; i++) {

        for (int i1 = 0; i1 < (len - 1 - (i * 2)) / 2; i1++) {
            printf("  ");
        }

        for (int i2 = 0; i2 < (i * 2) + 1; i2++) {
            printf("* ");
        }

        for (int i3 = 0; i3 < (len - 1 - (i * 2)) / 2; i3++) {
            printf("  ");
        }
        printf("\n");
    }

    return 0;
}
