#include <stdio.h>

void display() {
    int a = 10;  // Local variable to display()
    printf("Value of a inside display() = %d\n", a);
}

int main() {
    int a = 5;   // Local variable to main()
    printf("Value of a inside main() = %d\n", a);

    display();   // Call display function

    // Uncommenting the line below will cause an error
    // printf("Trying to access a from display(): %d\n", a);

    return 0;
}
