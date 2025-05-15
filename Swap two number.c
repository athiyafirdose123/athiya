#include <stdio.h>

// Function to swap values using pointers
void swap(int *a, int *b) {
    int temp;
    temp = *a;   // Store the value of *a
    *a = *b;     // Assign value of *b to *a
    *b = temp;   // Assign stored value to *b
}

int main() {
    int num1 = 5, num2 = 10;

    printf("Before swapping:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    // Call swap function with addresses of num1 and num2
    swap(&num1, &num2);

    printf("After swapping:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
