#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char* isim;
    char* tur;
    int yil;
    int sure;
}Film;


int main(){

    Film film = {"The Godfather", "Crime", 1972, 152};

    FILE* dosya;

    dosya = fopen("ilk.txt", "w");
    if(dosya == NULL){
        puts("Dosya acilamadi\n");
    }
    else{
        fprintf(dosya, "%s\n%s\n%d\n%d\n", film.isim, film.tur,film.yil,  film.sure);
    }
    fclose(dosya);

    return 0;
}