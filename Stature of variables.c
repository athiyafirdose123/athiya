struct Student {
    char name[50];
    int roll;
    float marks;
};
struct Student s1;
struct Student {
    char name[50];
    int roll;
    float marks;
} s1, s2;
strcpy(s1.name, "Alice"); // For strings
s1.roll = 101;
s1.marks = 87.5;
