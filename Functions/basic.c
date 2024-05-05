#include<stdio.h>

void England(){
    printf("You are in England\n");
    return;
}
void Australia(){
    printf("You are in australia\n");
    England();                           // calling england()
    return;
}
void India(){
    printf("You are in India\n");
    Australia();                     // calling Austraila()
    return;
}
int main(){
    India();                        // calling India()
    return 0;
}