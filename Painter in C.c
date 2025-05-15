#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;  // p stores the address of x

    printf("Value of x: %d\n", x);       // 10
    printf("Address of x: %p\n", &x);    // Address of x
    printf("Value stored in p: %p\n", p); // Same address as &x
    printf("Value pointed by p: %d\n", *p); // 10

    return 0;
}
