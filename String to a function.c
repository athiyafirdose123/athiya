#include <stdio.h>
void printCharacters(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c ", str[i]);
    }
    printf("\n");
}
int main() {
    char str[] = "Hello, World!";
    printCharacters(str);
    return 0;
}
