#include <stdio.h>

int main(){

    int *ptr, a = 10;
    ptr = &a;
    *ptr += 1;

    printf("\n");
    printf("%d %d\n", *ptr,a);

    return 0;
}