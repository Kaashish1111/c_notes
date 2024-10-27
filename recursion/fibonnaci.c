#include<stdio.h>

int fibbo(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    return fibbo(n-1) + fibbo(n-2);
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Fibonacci series up to %dth term: ",n);
    for(int i=0; i<=n; i++){
        printf("%d ",fibbo(i));
    }
    return 0;
}