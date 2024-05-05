#include<stdio.h>
int hcf(int x,int y){
    int min=(x>y)?x:y;
    int ans;
    for(int i=1;i<=min;i++){
        if(x%i==0 && y%i==0){
            ans=i;
        }
    }
    return ans;
}
int main(){
    int a;
    printf("Enter first number: ");
    scanf("%d",&a);
    int b;
    printf("Enter second number: ");
    scanf("%d",&b);
    int gcd=hcf(a,b);
    printf("The hcf/gcd of %d and %d is %d",a,b,gcd);
    return 0;
}