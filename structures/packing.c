#include <stdio.h>
#pragma pack(1) // this allow us to stop watsge of memory try runing the program excluding this and including this.
struct abc
{
    char a;
    int b;
};
int main()
{
    struct abc s;
    printf("size of structure is %d", sizeof(s));
    return 0;
}