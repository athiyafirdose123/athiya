#include <stdio.h>


void swap(int *a, int *b) {
    int temp;
    temp = *a;  
    *a = *b;     
    *b = temp;   }


int main() {
    int num1 = 5, num2 = 10;

    printf("Before swapping:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);
    swap(&num1, &num2);

    printf("After swapping:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
