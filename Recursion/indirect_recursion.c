<<<<<<< HEAD
#include<stdio.h>
int fun1(int );
int fun2(int );
int fun1(int n){
    if(n<=1){
        return 1;
    }
    else{
        return n*fun2(n-1);
    }
}
int fun2(int n){
    if(n<=1){
        return 1;
    }
    else{
        return n*fun1(n-1);
    }
}
int main(){
    printf("%d\n",fun1(5));
    return 0;
=======
#include<stdio.h>
int fun1(int );
int fun2(int );
int fun1(int n){
    if(n<=1){
        return 1;
    }
    else{
        return n*fun2(n-1);
    }
}
int fun2(int n){
    if(n<=1){
        return 1;
    }
    else{
        return n*fun1(n-1);
    }
}
int main(){
    printf("%d\n",fun1(5));
    return 0;
>>>>>>> b1e7a5fa1444fc5dc2972906867dc7edce01c1f7
}