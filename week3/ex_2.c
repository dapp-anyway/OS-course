#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}

int main() {
    int arr[] = {1, 3, 2, 5, 4, 9, 7};
    size_t length = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < length; ++i)
        printf("%d ", arr[i]);

    bubble_sort(arr, length);

    printf("\n");
    for(int i = 0; i < length; ++i)
        printf("%d ", arr[i]);

    return 0;
}