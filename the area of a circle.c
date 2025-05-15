#include <stdio.h>
#define PI 3.14159

float area_of_circle(float radius) {
    return PI * radius * radius;
}

int main() {
    float r = 5.0;
    float area = area_of_circle(r);
    printf("Area = %.2f", area); 
    return 0;
}
