#include<stdio.h>
int main(){
    int a[2][3];
    printf("Enter the elements of matrix: ");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nThe matrix formed is : \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}