#include <stdio.h>

int main() {
    int num = 42;
    int *ptr = &num; // ptr holds the address of num

    // Dereferencing the pointer to access the value of num
    printf("Value of num using pointer: %d\n", *ptr);

    // Changing the value of num using the pointer
    *ptr = 100;
    printf("New value of num: %d\n", num);

    return 0;
}
