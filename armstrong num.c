#include<stdio.h>
int main(){
    int num,rem,original,result=0;
    printf("enter the number ");
    scanf("%d",&num);
    original=num;
    while(num!=0){
        rem=num%10;
        result+=rem*rem*rem;
        num/=10;
    }
    if(result==original){
    printf("%d the number is armstorg\n",original);
    }
    else{
    printf(" %dthe number is not a armstrong\n",original);
    }
}
