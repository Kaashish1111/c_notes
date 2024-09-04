#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon
    {
        int attack;
        char name[50];
        int hp;
    } pokemon;
    pokemon arr[50];
    arr[0].attack=150;
    strcpy(arr[0].name, "Pikachu");
    return 0;
}