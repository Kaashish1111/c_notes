

#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    scanf("%[^\n]s",str);
    printf("%s",str);
    char str1[10];
    scanf("%[^\n]s",str);
    printf("%s",str);
    printf("%s",strcat(str,str1));
    return 0;
}