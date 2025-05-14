#include<stdio.h>
int main(){
     int n,c;
     printf("enter the value n\n");
     scanf("%d",&n);
     if(n==0){
         printf("1");
         }
     else{
         for(int i=1;i<=n;i++)
         {
             c*=i;
         }
         printf("%d\n",c);
     }
     return 0;
}
    
