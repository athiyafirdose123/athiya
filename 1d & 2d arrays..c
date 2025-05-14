Difference Between 1D and 2D Arrays in C

1. One-Dimensional Array (1D Array)

A 1D array is a single row or column of elements, like a list.

It stores elements linearly (in a single line).


Declaration Example:

int numbers[5];  // array of 5 integers

Accessing Elements:

numbers[0] = 10;
printf("%d", numbers[0]);  // Output: 10

Visualization:

Index:   0   1   2   3   4
Values: 10  20  30  40  50


---

2. Two-Dimensional Array (2D Array)

A 2D array is like a matrix with rows and columns.

It stores elements in table format.


Declaration Example:

int matrix[2][3];  // 2 rows, 3 columns

Accessing Elements:

matrix[0][1] = 25;
printf("%d", matrix[0][1]);  // Output: 25

Visualization:

Row\Col   0   1   2
   0     10  25  30
   1     40  50  60


---

Summary Table:

Feature	1D Array	2D Array

Structure	Linear list	Table (rows × columns)
Declaration	int arr[5];	int arr[3][4];
Accessing Element	arr[2]	arr[1][3]
Use Case	List of marks, scores	Student marks in multiple subjects


Let me know if you'd like code examples for input/output of both types.
