#include<stdio.h>
int main(){
    FILE *fp=NULL;
    char ch;
    fp=fopen("xyz.txt","w+");
    if(fp==NULL){
        printf("File not found");
        exit(1);
    }
    fputs("kashish",fp);
    rewind(fp);
    while (!feof(fp))
    {
        ch=fgetc(fp);
        printf("%c",ch);
    }
    fclose(fp);
    return 0;
}