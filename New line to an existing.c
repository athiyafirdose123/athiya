#include <stdio.h>

int main() {
    FILE *file;

    // Open the file in append mode ("a")
    file = fopen("example.txt", "a");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Error opening the file!\n");
        return 1;
    }

    // Append a new line to the file
    fprintf(file, "\nThis is a new line appended to the file.");

    // Close the file
    fclose(file);

    printf("New line appended successfully!\n");
    return 0;
}
