#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int zar1, zar2;

    srand(time(NULL));

    zar1 = rand() % 6 + 1;
    zar2 = rand() % 6 + 1;

    printf("Zarlar atiliyor...\n");
    printf("1. Zar: %d\n", zar1);
    printf("2. Zar: %d\n", zar2);

    return 0;
}