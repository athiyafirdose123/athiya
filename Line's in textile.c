#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    int lineCount = 0;

    // Open the file in read mode
    file = fopen("input.txt", "r");

    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    // Read characters from file
    while ((ch = fgetc(file)) != EOF) {
        // If the character is a newline, increase the line count
        if (ch == '\n') {
            lineCount++;
        }
    }

    // Check if file is non-empty and contains at least one line
    if (lineCount > 0 || (lineCount == 0 && ch != EOF)) {
        lineCount++;  // To account for the last line that doesn't end with a newline
    }

    // Print the number of lines
    printf("Number of lines in the file: %d\n", lineCount);

    // Close the file
    fclose(file);

    return 0;
}
