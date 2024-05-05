#include<stdio.h>
void f(int *p,int m){
    m=m+5;
    *p=*p+5;
    return;
}
int main(){
    int i=5,j=10;
    f(&i,j);
    printf("%d",i+j);
}