#include<stdio.h>
#include<string.h>
int main(){
    char name[50];
    scanf("%s",name);
    int l=strlen(name);
    char s[50];
    for(int i=0;i<l/2;i++){
        s[i]=name[i];
        name[i]=name[l-1-i];
        name[l-1-i]=s[i];
    }
    printf("The reverse of string is %s",name);
    return 0;
}
// #include<stdio.h>
// #include<string.h>

// int main(){
//   char str[10]; // Declare a character array of size 10
//   scanf("%[^n]s",str); // Read input until 'n' is encountered
//   printf("%s",str); // Print the original string
//   strrev(str); // Reverse the string (this function is not standard in C)
//   puts(str); // Print the reversed string
//   return 0;
// }

