#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2==0){
            int a=65;
            for(int j=1;j<=n;j++){
                printf("%c ",a);
                a++;
            }
        }
        else{
            int b=1;
            for(int k=1;k<=n;k++){
                printf("%d ",b);
                b++;
            }
        }
        printf("\n");
    }
    return 0;
}