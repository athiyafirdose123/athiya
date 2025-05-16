#include <stdio.h>

// Define the structure
struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student students[3]; // Array to store 3 students
    float totalMarks = 0.0, average;

    // Input student details
    for (int i = 0; i < 3; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", students[i].name);

        printf("Roll Number: ");
        scanf("%d", &students[i].roll);

        printf("Marks: ");
        scanf("%f", &students[i].marks);

        totalMarks += students[i].marks;
    }

    // Calculate average
    average = totalMarks / 3.0;

    // Display result
    printf("\nAverage Marks of 3 Students: %.2f\n", average);

    return 0;
}
