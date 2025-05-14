#include<stdio.h>
int i;
int athiya_sadeeq(int n, int fact){
    if(n==0){
        return 1;
    }
    else if(n<0){
        printf("enter positive number");
    }
    else{
        for(i=1;i<=n;i++){
            fact*=i;
        }
    }
    return fact;
}

int main(){
    int c;
    c=athiya_sadeeq(4,6);
    printf("%d",c);
}
