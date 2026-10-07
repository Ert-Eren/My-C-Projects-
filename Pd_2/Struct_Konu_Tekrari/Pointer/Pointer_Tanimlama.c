#include <stdio.h>

int main(){

    int i = 5; 
    int *iptr;

    iptr = &i;

    printf("i adresi -> %p\n", &i);
    printf("iptr degeri -> %p\n", iptr);
    printf("i degeri -> %d\n", i);
    printf("iptr degeri -> %d\n", *iptr);

    return 0;
}