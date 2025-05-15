#include <stdio.h>

int main() {
    char fullName[100];

    printf("Enter your full name: ");
    fgets(fullName, sizeof(fullName), stdin);

    // Remove the newline character if present
    fullName[strcspn(fullName, "\n")] = '\0';

    printf("Your full name is: %s\n", fullName);

    return 0;
}
