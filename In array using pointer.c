#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr;
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Array elements using pointer:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(ptr + i)); 
    }

    return 0;
}
