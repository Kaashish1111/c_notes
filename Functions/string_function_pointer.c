#include<stdio.h>
void display(char str[]){
    printf("The string is %s\n",str);
}
int main(){
    char str[50];
    printf("Enter the string\n");
    scanf("%s",str);
    display(str);
    return 0;
}