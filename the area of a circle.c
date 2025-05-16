#include <stdio.h>
float area_of_circle(float radius) {
    return PI * radius * radius;
}
int main() {
    float r = 5.0;
    float area = area_of_circle(r);
    printf("Area = %.2f", area); 
    return 0;
}
