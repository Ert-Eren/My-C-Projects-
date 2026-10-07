#include <stdio.h>

void fun2(int **p);

int main(){

    int a = 10, *p = &a;
    fun2(&p);
    printf("%d", *p);

}

void fun2(int **p){

    int b = 8;
    *p = &b;
    printf("%d", **p);
    
}