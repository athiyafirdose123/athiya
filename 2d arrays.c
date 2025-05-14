#include <stdio.h>

int main() {
    int marks[3][3]; // 2D array for 3 students and 3 subjects

    // Input marks
    printf("Enter marks for 3 students in 3 subjects:\n");
    for (int i = 0; i < 3; i++) {
        printf("Student %d:\n", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("  Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    // Print marks
    printf("\nMarks of students:\n");
    for (int i = 0; i < 3; i++) {
        printf("Student %d: ", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("%d ", marks[i
