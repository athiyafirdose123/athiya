#include <stdio.h>

int main() {
    int arr[] = {10, 25, 14, 56, 32};
    int size = sizeof(arr) / sizeof(arr[0]);
    int largest = arr[0];

    for(int i = 1; i < size; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("Largest element is: %d", largest);
    return 0;
}
