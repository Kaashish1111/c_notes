#include<stdio.h>
int main(){
    int n;
    printf("Enter no of lines:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int l=1;l<=n+1-i;l++){
            printf("  ");
        }
        int a=65;
        for(int j=1;j<=i;j++){
            printf("%c ",a);
            a++;
        }
        int c=64+i-1;
        for(int k=1;k<=i-1;k++){
            printf("%c ",c--);
        }
        printf("\n");
    }
    return 0;
}