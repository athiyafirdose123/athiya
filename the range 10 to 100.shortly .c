#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num >= 10 && num <= 100)
        printf("Within range\n");
    else
        printf("Out of range\n");
    return 0;
}
