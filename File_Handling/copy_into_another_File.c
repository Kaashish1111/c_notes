#include <stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp1, *fp2;
    char ch;
    fp1 = fopen("abc.txt", "r");
    fp2 = fopen("new.txt", "r");
    if (fp1 == NULL)
    {
        printf("File not found");
        exit(1);
    }
    while ((ch = fgetc(fp1)) != EOF)
    {
        fputc(ch, fp2);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}
