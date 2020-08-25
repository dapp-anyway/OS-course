//
// Created by dappa on 25.08.2020.
//

#include <stdio.h>

void swap(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}

int main() {

    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);


    swap(&a, &b);
    printf("%zu", a);
    printf("\n");
    printf("%zu", b);

    return 0;
}

