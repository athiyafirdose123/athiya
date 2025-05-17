#include <stdio.h>
int main() {
    FILE *file; 
    file = fopen("example.txt", "a");
    if (file == NULL) {
        printf("Error opening the file!\n");
        return 1;
    }
     fprintf(file, "\nThis is a new line appended to the file.");
    fclose(file);
    printf("New line appended successfully!\n");
    return 0;
}
