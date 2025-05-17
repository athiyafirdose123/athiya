#include <stdio.h>
#include <stdlib.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};
void storeStudentRecords() {
    FILE *file = fopen("students.dat", "wb"); 
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student s;
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        getchar(); 
        fgets(s.name, sizeof(s.name), stdin);  
        printf("Roll Number: ");
        scanf("%d", &s.roll);
        printf("Marks: ");
        scanf("%f", &s.marks);
        fwrite(&s, sizeof(struct Student), 1, file);
    }
    fclose(file);
    printf("\nStudent records stored successfully.\n");
}
void retrieveStudentRecords() {
    FILE *file = fopen("students.dat", "rb");  
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return;
    }
    struct Student s;
    printf("\nStudent Records:\n");
    while (fread(&s, sizeof(struct Student), 1, file) == 1) {
        printf("\nName: %s", s.name);
        printf("Roll Number: %d\n", s.roll);
        printf("Marks: %.2f\n", s.marks);
    }

    fclose(file);
}
int main() {
    int choice;
    while (1) {
        printf("\nMenu:\n");
        printf("1. Store Student Records\n");
        printf("2. Retrieve Student Records\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                storeStudentRecords();
                break;
            case 2:
                retrieveStudentRecords();
                break;
            case 3:
                printf("Exiting the program.\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
