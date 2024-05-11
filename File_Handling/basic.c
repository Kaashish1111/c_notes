#include<stdio.h>
int main(){
    FILE *fp;
    fp=fopen("abc.txt","w");
    int a=10;
    char str[100]="Hello World";
    // fputc('a',fp); this is to just put a character.
    // fputs("Hello World",fp); this is just to put a string.
    fprintf(fp,"%s %d",str,a);     // fprintf this is for any datatype.
    fclose(fp);
    return 0;
}