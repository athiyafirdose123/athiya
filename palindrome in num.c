#include<stdio.h>
int main(){
    int num,revresed=0,rem,original;
    printf("enter the number int");
    scanf("%d",&num);
    original=num;
    while(num!=0){
        rem=num%10;
        revresed=revresed*10+rem;
        num/=10;
    }
    if(revresed==original)
    printf("the number is palindrome");
    else
    printf("the number is not a palindrome");
    return 0;
}
