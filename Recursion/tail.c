#include<stdio.h>
void print(int a){
    if(a==1){
        return;
    }
    else{
        printf("%d\n",a);
        print(a/2);
        // printf("%d\n",a);  if we do this this then it is a non-tail recursion.
    }
}
int main(){
    print(10);
    return 0;
}