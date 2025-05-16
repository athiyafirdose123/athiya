#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    // Open file in read mode
    fp = fopen("output.txt", "r");

    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    // Read and print each character until end of file
    printf("File contents:\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    // Close the file
    fclose(fp);

    return 0;
}
