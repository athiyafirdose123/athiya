#include <stdio.h>

// Define structure for complex number
struct Complex {
    float real;
    float imag;
};

// Function to add two complex numbers
struct Complex add(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

// Function to subtract two complex numbers
struct Complex subtract(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}

int main() {
    struct Complex num1, num2, sum, diff;

    // Input first complex number
    printf("Enter first complex number (real and imaginary): ");
    scanf("%f %f", &num1.real, &num1.imag);

    // Input second complex number
    printf("Enter second complex number (real and imaginary): ");
    scanf("%f %f", &num2.real, &num2.imag);

    // Perform addition and subtraction
    sum = add(num1, num2);
    diff = subtract(num1, num2);

    // Display results
    printf("\nSum = %.2f + %.2fi\n", sum.real, sum.imag);
    printf("Difference = %.2f + %.2fi\n", diff.real, diff.imag);

    return 0;
}
