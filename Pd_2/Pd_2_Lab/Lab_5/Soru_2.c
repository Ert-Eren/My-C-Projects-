#include <stdio.h>

int main(){

    int i;
    int *i_ptr;
    i = 5;
    i_ptr = &i;

    printf("\ni adresi --> %p\n", &i);
    printf("iptr degeri --> %p\n", i_ptr);

    printf("i degeri --> %d\n", i);
    printf("*iptr degeri --> %d\n", *i_ptr);

    getchar();
    
    return 0;
}