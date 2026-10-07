#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Film{
    char isim[50];
    char yonetmen[50];
    int dakika;
    int cikisYili;
};

int main(){

    struct Film bilgi;
    struct Film* ptrBilgi;

    ptrBilgi = &bilgi;

    printf("\nFilmin ismini gir: ");
    fgets(ptrBilgi->isim, sizeof(ptrBilgi->isim), stdin);

    printf("Yonetmenin ismini gir: ");
    fgets(ptrBilgi->yonetmen, sizeof(ptrBilgi->yonetmen), stdin);

    printf("Filmin suresini gir (dk): ");
    scanf("%d", &ptrBilgi->dakika);

    printf("Flmin cikis yilini gir: ");
    scanf("%d", &ptrBilgi->cikisYili);

    printf("=========================\n=========================\n");

    return 0;
}