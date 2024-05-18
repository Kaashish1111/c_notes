#include <stdio.h>
int main()
{
    FILE *fp = NULL;
    char ch;
    fp = fopen("story.txt", "r");
    if (fp == NULL)
    {
        printf("File doesn't exist");
    }
    else
    {
        while (!feof(fp))
        {
            ch = fgetc(fp);
            printf("%c", ch);
        }
    }
    fclose(fp);
    return 0;
}