#include <stdio.h>
void modify(int x) {
    x = 10;
}
int main() {
    int a = 5;
    modify(a);
    printf("%d", a); 
    return 0;
}
