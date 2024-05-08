#include<stdio.h>
typedef struct student{
    int roll_no;
    char name[20];
    float marks;
}student;
void main(){
    student s={2,"Sunita",89.8};
    printf("Roll no:%d\n",s.roll_no );
    printf("Name:%s\n",s.name);
    printf("Marks:%.2f\n",s.marks);
}