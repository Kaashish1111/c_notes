#include<stdio.h>
int main(){
        int a[50][60];
    int row_Size;
    printf("Enter the row size: \n");
    scanf("%d",&row_Size);
    int column_size;
    printf("Enter the column size: \n");
    scanf("%d",&column_size);
    for(int i=0;i<row_Size;i++){
        for(int j=0;j<column_size;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("The array you entered is: \n");
    for(int i=0;i<row_Size;i++){
        for(int j=0;j<column_size;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    
}