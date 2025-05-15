#include <stdio.h>

int main() {
    int num = 10;       // Declare an integer variable
    int *ptr;           // Declare a pointer to int

    ptr = &num;         // Assign the address of num to the pointer

    // Display the address and the value using the pointer
    printf("Address of num using pointer: %p\n", ptr);
    printf("Value of num using pointer: %d\n", *ptr);

    return 0;
}
