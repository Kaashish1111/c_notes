#include<stdio.h>
int main(){
    int a[2][3];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    int b[3][2];
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
        scanf("%d",&b[i][j]);
        }
    }
     for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    int c[2][3];
    int sum=0;
    printf("The matrix multiplication is: ");
    printf("\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            sum=0;
            for(int k=0;k<3;k++)//ist matrix column 
            sum=sum+a[i][k]*b[k][j];
            c[i][j]=sum;
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}