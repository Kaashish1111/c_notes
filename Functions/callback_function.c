#include<stdio.h>
void sum(int a,int b){
    printf("sum is %d",a+b);
}
void sub(int a,int b){
    printf("sub is %d",a-b);
}
void display(void (*fitr)(int ,int)){
    (*fitr)(5,6);
}
int main(){
    display(sum);
    printf("\n");
    display(sub);
    return 0;
}