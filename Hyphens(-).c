#include <stdio.h>

void replaceSpacesWithHyphens(char str[]) {
    // Traverse the string
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {  // Check if the character is a space
            str[i] = '-';      // Replace space with hyphen
        }
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character if it's included by fgets()
    str[strcspn(str, "\n")] = '\0';

    // Replace spaces with hyphens
    replaceSpacesWithHyphens(str);

    printf("Modified string: %s\n", str);

    return 0;
}
