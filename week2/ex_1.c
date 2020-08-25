//
// Created by dappa on 25.08.2020.
//

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {

    int a;
    float b;
    double c;

    a = INT_MAX;
    b = FLT_MAX;
    c = DBL_MAX;

    printf("size: %zu",sizeof(a));
    printf(", value: %zu\n",a);

    printf("size: %zu",sizeof(b));
    printf(", value: %zu\n",b);

    printf("size: %zu",sizeof(c));
    printf(", value: %zu",c);

    return 0;
}