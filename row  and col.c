#include <stdio.h>
int main(){
    int row,col,i,j;
    printf("enter the row and col");
    scanf("%d%d",&row,&col);
    int a[row][col] ,b[row][col],c[row][col];
    for (i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("enter the element of A matrix\n");
            scanf("%d",&a[i][j]);
        }
            
    }
    for (i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("enter the element of B matrix\n");
            scanf("%d",&b[i][j]);
        }
    }
    for (i=0;i<row;i++){
        for(j=0;j<col;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for (i=0;i<row;i++){
        for(j=0;j<col;j++){
        printf("the output is\n");
        printf("%d",&c[i][j]);
        }
    }   

}
