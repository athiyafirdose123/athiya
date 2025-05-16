#include<stdio.h>
int main(){
    int i,num,isprime=1;
    printf("enter the number starting form positive 2:");
    scanf("%d",&num);
    {
        for(i=2;i<=num/2;i++);{
            if(num%2==0)
            isprime=0;
    if(isprime){
        printf("the number is not prime\n");
    }
        else{
            printf("the number is prime\n");
        }
        }
    }
}

