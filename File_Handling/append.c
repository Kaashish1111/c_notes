#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp=NULL;
    char str[1024];
    fp=fopen("example.txt","a");
    if(fp==NULL){
        printf("File not found");
        exit(1);
    }
    printf("Enter the words that you wnat to add: ");
    gets(str);
    fputs(str,fp);
    fclose(fp);
    return 0;
}