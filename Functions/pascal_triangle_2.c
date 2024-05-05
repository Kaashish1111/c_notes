#include<stdio.h>
int main(){
    int x;
    printf("Enter: ");
    scanf("%d",&x);
    for(int i=0;i<=x;i++){
        for(int k=1;k<=(x-i);k++){
            printf("  ");
        }
        int first=1;
        for(int j=0;j<=i;j++){
            printf("%6d ",first);
            first=first*(i-j)/(j+1);
        }
        printf("\n");
    }
    return 0;
}