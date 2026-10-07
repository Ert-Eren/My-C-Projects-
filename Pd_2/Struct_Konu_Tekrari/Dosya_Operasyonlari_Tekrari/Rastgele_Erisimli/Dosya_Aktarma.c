#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    FILE* kaynak;
    FILE* hedef;
    char satir[100];

    kaynak = fopen("listOgrenci.dat", "rb");
    hedef = fopen("yeniListOgrenci.dat", "wb");

    if (kaynak == NULL && hedef == NULL){
        printf("\nDosyalar Olusturulamadi!\n");
        return 1;
    }
    
    while(fgets(satir, sizeof(satir), kaynak)){
        fprintf(hedef, "%s\n", satir);
    }


    printf("\nDosya Aktarimi Basarili\n");

    fclose(kaynak);
    fclose(hedef);

    return 0;
}