#include <stdio.h>
#include <stdlib.h>

int main() {

    int N;
    printf("Enter N:\n");
    scanf("%d", &N);

    int *A = (int*)malloc(sizeof(int) * N);

    for(int i = 0; i < N; i++){
        A[i] = i;
    }
    for(int i = 0; i < N; i++){
        printf("%d ", A[i]);
    }

    free(A);
    return 0;
}