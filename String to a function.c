#include <stdio.h>

// Function to print each character of the string
void printCharacters(char str[]) {
    // Loop through each character in the string
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c ", str[i]);
    }
    printf("\n");
}

int main() {
    char str[] = "Hello, World!"; // Define a string

    // Pass the string to the function
    printCharacters(str);

    return 0;
}
