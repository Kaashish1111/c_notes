#include <stdio.h>
int main()
{
    char str[10];
    FILE *fp = NULL;
    fp = fopen("story.txt", "r");
    if (fp == NULL)
    {
        printf("File not found");
    }
    else
    {
        while (fgets(str, 10, fp) != NULL)
        {
            printf("%s", str);
        }
    }
    return 0;
}