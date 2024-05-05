#include<stdio.h>
int main(){
    int n;
    printf("Enter no of lines:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int l=1;l<=n+1-i;l++){
            printf("  ");
        }
        int a=1;
        for(int j=1;j<=i;j++){
            printf("%d ",a);
            a++;
        }
        int d=i-1;
        for(int k=1;k<=i-1;k++){
            printf("%d ",d--);
        }
        printf("\n");
    }
    return 0;
}