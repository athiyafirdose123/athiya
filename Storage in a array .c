#include <stdio.h>


float calculate_average(int arr[], int n) {
    int sum = 0;
    
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    return (float)sum / n;
}

int main() {
    int n;


    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    float avg = calculate_average(arr, n);
    printf("Average = %.2f\n", avg);

    return 0;
}
