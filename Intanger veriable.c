#include <stdio.h>

int main() {
    int num = 10;
    int *ptr;           
    ptr = &num;      
    printf("Address of num using pointer: %p\n", ptr);
    printf("Value of num using pointer: %d\n", *ptr);

    return 0;
}
