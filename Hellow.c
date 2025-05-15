#include <stdio.h>

int main() {
    // Defining a null-terminated string
    char str[] = "Hello";

    // Printing the string
    printf("The string is: %s\n", str);

    // Printing the individual characters including the null terminator (in memory)
    for (int i = 0; i < 6; i++) {
        printf("Character %d: '%c' (ASCII: %d)\n", i, str[i], str[i]);
    }

    return 0;
}
