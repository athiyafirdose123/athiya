#include<stdio.h>
#include<math.h>
int main(){
    int i,num,isprime=1;
    printf("enter the number starting form positive 2:");
    scanf("%d",&num);
    int limit=(int)sqrt(num);
    for(i=2;i<=limit;++i){
        if(num%i==0){
            isprime=0;
            break;
        }
    }
    if(isprime){
        printf("%dthe number is  prime\n");
    }
    else{
            printf("%dthe number is not prime\n");
        }
        }
    
