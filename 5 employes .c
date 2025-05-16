#include <stdio.h>

// Define the structure
struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee emp[5]; // Array of 5 structures

    // Input details for each employee
    for (int i = 0; i < 5; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", emp[i].name); // To read string with spaces

        printf("ID: ");
        scanf("%d", &emp[i].id);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    // Display employee details
    printf("\nEmployee Details:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Name: %s\n", emp[i].name);
        printf("ID: %d\n", emp[i].id);
        printf("Salary: %.2f\n", emp[i].salary);
    }

    return 0;
}
