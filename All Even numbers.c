#include <stdio.h>

void print_even(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        if(arr[i] % 2 == 0)
            printf("%d ", arr[i]);
    }
}

int main() {
    int nums[] = {1, 4, 7, 8, 10};
    print_even(nums, 5); 
    return 0;
}
