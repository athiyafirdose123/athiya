struct Student {
    char name[50];
    int roll;
    float marks;
};
struct Student s1 = {"Alice", 101, 89.5};
struct Student *ptr;   // Declare pointer to Student
ptr = &s1;             // Store address of s1 in ptr

printf("Name: %s\n", ptr->name);
printf("Roll: %d\n", ptr->roll);
printf("Marks: %.2f\n", ptr->marks);
printf("Name: %s\n", (*ptr).name);  // Same as ptr->name
