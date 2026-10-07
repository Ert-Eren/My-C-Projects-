#include <stdio.h>

int main(){


    int x,y,z;
    int *int_addr;

    x = 41;
    y = 12;

    int_addr = &x;
    z = *int_addr;

    printf("z: %d\n", z);

    int_addr = &y;
    z = *int_addr;

    printf("z: %d\n", z);

    return 0;
}