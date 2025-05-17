#include <stdio.h>

int main() {
    FILE *fp;
    char str[] = "Hello, this is a test string written to a file.";
    fp = fopen("output.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(fp, "%s", str);
    fclose(fp);
    printf("String written to file successfully.\n");
    return 0;
}
