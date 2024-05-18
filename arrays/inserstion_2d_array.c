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
    int row_pos,col_pos,value;
    printf("Enter the row position and column postion where you wnat to insert an array: \n");
    scanf("%d%d",&row_pos,&col_pos);
    printf("Enter the value that you wnat to insert: \n");
    scanf("%d",&value);
    for(int i=row_Size-1;i>=row_pos-1;i++){
        for(int j=column_size-1;j>=col_pos-1;j++){
            a[i+1][j+1]=a[i][j];
        }
    }
    a[row_pos-1][col_pos-1]=value;
    row_Size++;
    column_size++;
    printf("Printing the array after insertion: \n");
    for(int i=0;i<row_Size;i++){
        for(int j=0;j<column_size;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}