#include <stdio.h>

int x = 100; // Global variable - file scope

void display() {
    printf("Value of x inside display(): %d\n", x);
}

int main() {
    printf("Value of x inside main(): %d\n", x);
    display();  // Accessing x from another function
    return 0;
}
