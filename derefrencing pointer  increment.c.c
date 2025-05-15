#include <stdio.h>
int main(){
    int x=10;
    int*ptr=&x;
    printf("enter the value of x:%d\n",*ptr);
*ptr=15;
printf("new value of x:%d\n",x);
return 0;
}
