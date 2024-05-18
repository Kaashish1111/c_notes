#include <stdio.h>
int main()
{
    char str[1084];
    FILE *fp = NULL;
    fp = fopen("story.txt", "r");
    if (fp == NULL)
    {
        printf("File not found");
    }
    else
    {
        while (!feof(fp))
        {
            fgets(str, 1084, fp);
            printf("%s", str);
        }
    }
    return 0;
}