#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Film{
    char* isim;
}Film;

int main(){

    fopen("ilk.txt", "r");
    Film film;
    printf("Isım: %s\n", film->isim);

    return 0;
}