#include<stdio.h>
char* display(){
    static char str[]="Hello World";
    return str;
}
// char* display(){
//     char* str="Hello World";
//     return str;
// }
// const char* display(){
//     const char* str="Hello World";
//     return str;
// }
int main(){
    const char *str;
    str=display();
    printf("%s\n",str);
    // str[0]='g';
    printf("%s",str);
    return 0;
}