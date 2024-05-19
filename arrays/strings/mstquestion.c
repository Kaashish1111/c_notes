#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

int main()
{
    char str[MAX_LEN];
    char word1[MAX_LEN], word2[MAX_LEN], word3[MAX_LEN];
    char rest[MAX_LEN];

    printf("Enter a string: ");

    scanf("%[^\n]", str);

    int parts = sscanf(str, "%s %s %s %[^\n]", word1, word2, word3, rest);

    if (parts >= 3)
    {

        printf("Output: %s %s %s %s\n", word1, word3, word2, rest);
    }
    else
    {

        printf("Output: %s\n", str);
    }

    return 0;
}