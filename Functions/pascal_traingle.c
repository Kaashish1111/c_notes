#include<stdio.h>
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int combination(int n,int r){
    int ncr=factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}
int main(){
    int x;
    printf("Enter: ");
    scanf("%d",&x);
    for(int i=0;i<=x;i++){
        for(int k=1;k<=(x-i);k++){
            printf("  ");
        }
        for(int j=0;j<=i;j++){
            printf("%5d ",combination(i,j));
        }
        printf("\n");
    }
    return 0;
}