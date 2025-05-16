#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr =   malloc(2 * sizeof(int)); 
    arr[0] = 10;
    arr[1] = 20;
    arr =  realloc(arr, 3 * sizeof(int)); 
    arr[2] = 30;
    for (int i = 0; i < 3; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}
