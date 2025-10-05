#include<stdio.h>
#include<string.h>
struct person
{
    char first_name[50];
    char last_name[50];
    int age;
    int id;


};
int main()
{
    struct person student1;
    struct person student2;
    strcpy(student1.first_name,"Tahsin");
    strcpy(student1.last_name,"Sheikh");
    student1.age = 20;
    student1.id = 22201243;

    strcpy(student2.first_name,"Sadman");
    strcpy(student2.last_name,"Sarwar");
    student2.age = 22;
    student2.id = 22201242;

    printf("student 1:\n");
    printf("First Name:%s\n",student1.first_name);
    printf("Last Name:%s\n",student1.last_name);
    printf(" ID:%d\n",student1.id);
    printf(" Age:%d",student1.age);

    printf("student 2:\n");
    printf("First Name:%s\n",student2.first_name);
    printf("Last Name:%s\n",student2.last_name);
    printf(" ID:%d\n",student2.id);
    printf(" Age:%d",student2.age);
    getch();
}
