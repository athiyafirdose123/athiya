#include <stdio.h>

int main() {
    char str[] = "Hello";
    printf("The string is: %s\n", str);
    for (int i = 0; i < 6; i++) {
        printf("Character %d: '%c' (ASCII: %d)\n", i, str[i], str[i]);
    }
    return 0;
}
