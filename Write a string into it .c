#include <stdio.h>

int main() {
    FILE *fp;
    char str[] = "Hello, this is a test string written to a file.";

    // Open file in write mode
    fp = fopen("output.txt", "w");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Write string to file
    fprintf(fp, "%s", str);

    // Close the file
    fclose(fp);

    printf("String written to file successfully.\n");

    return 0;
}
