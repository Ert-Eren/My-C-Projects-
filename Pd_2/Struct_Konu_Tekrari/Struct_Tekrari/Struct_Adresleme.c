#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char* name;
    int age;
}Person;

typedef struct{
    int studentNumber;
    Person p1;
}Student;

int main(){

    Person p1;

    p1.name = "Ahmet";
    p1.age = 21;

    printf("\nStruct'in adresi -> %p\n", &p1);
    printf("Name'in adresi -> %p\n", &p1.name);
    printf("Age'in adresi -> %p\n", &p1.age);

    printf("\n-------------------------------\n\n");

    Student* std;
    std = (Student*)malloc(sizeof(Student));

    std->studentNumber = 3169;
    std->p1.name = "Ayse";
    std->p1.age = 24;

    printf("std pointer'inin adresi -> %p\n", &std);
    printf("Student'in adresi -> %p\n", std);
    printf("Student'in schoolNumber'inin adresi -> %p\n", &std->studentNumber);
    printf("Student'in person'in adresi -> %p\n", &std->p1);
    printf("Student'in person'inin name'inin adresi -> %p\n", &std->p1.name);
    printf("Student'in person'inin age'inin adresi -> %p\n", &std->p1.age);

    return 0;
}