#include <stdio.h>

int main() {
    int num = 42;
    int *ptr = &num; 
    printf("Value of num using pointer: %d\n", *ptr);
    *ptr = 100;
    printf("New value of num: %d\n", num);

    return 0;
}
