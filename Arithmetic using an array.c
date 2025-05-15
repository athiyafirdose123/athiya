#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;  // points to the first element

    printf("Accessing elements using pointer arithmetic:\n");

    for (int i = 0; i < 5; i++) {
        // *(ptr + i) is equivalent to arr[i]
        printf("Element %d: %d (Address: %p)\n", i, *(ptr + i), (ptr + i));
    }

    return 0;
}
