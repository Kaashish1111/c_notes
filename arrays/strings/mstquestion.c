#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

int main()
{
    char str[MAX_LEN];
    char word1[MAX_LEN], word2[MAX_LEN], word3[MAX_LEN];
    char rest[MAX_LEN];

    printf("Enter a string: ");

    scanf("%[^\n]", str); //The program prompts the user to enter a string and then reads the string using the scanf function. The %[^\n] format specifier is used to read all characters until a newline character is encountered.

    int parts = sscanf(str, "%s %s %s %[^\n]", word1, word2, word3, rest);  //The sscanf function is used to parse the input string into its parts. The %s %s %s %[^\n] format specifier is used to read up to three words and the rest of the string. The number of parts read is stored in the parts variable.

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