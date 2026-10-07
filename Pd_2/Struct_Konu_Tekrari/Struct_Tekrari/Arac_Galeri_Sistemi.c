#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Araba{
    char marka[15];
    char model[15];
    int yil;
    float fiyat;
};

void enPahaliyiBul(struct Araba galeri[], int boyut);
void listele(struct Araba galeri[], int boyut);

int main(){

    printf("\n------Araba Galerisi Sistemi------\n");
    
    int boyut;

    printf("\nGirilecek araba sayisi: ");
    scanf("%d", &boyut);

    getchar();

    struct Araba *galeri = (struct Araba*) malloc(boyut * sizeof(struct Araba));

    if(galeri == NULL){
        printf("Bellek Ayrilamadi!\n\n");
        return 1;
    }
    
    for(int i=0; i<boyut; i++){
        printf("\n%d. Arabanin bilgilerini girin: \n", i+1);
        
        printf("Marka: ");
        fgets(galeri[i].marka, sizeof(galeri[i].marka), stdin);

        printf("Model: ");
        fgets(galeri[i].model, sizeof(galeri[i].model), stdin);
    
        printf("Uretim yili: ");
        scanf("%d", &galeri[i].yil);

        printf("Fiyati($): ");
        scanf("%f", &galeri[i].fiyat);

        getchar();
    }

    printf("\nAraclar basariyla kaydedildi!\n\n");

    listele(galeri, boyut);

    enPahaliyiBul(galeri, boyut);

    free(galeri);
    return 0;
}

void enPahaliyiBul(struct Araba galeri[], int boyut){
    
    int maxIndex = 0;
    for(int i=0; i<boyut; i++){
        if (galeri[i].fiyat > galeri[maxIndex].fiyat){
            maxIndex = i;
        }
    }

    printf("En pahali aracın bilgileri: \n\n");
    printf("Marka-> %s", galeri[maxIndex].marka);
    printf("Model-> %s", galeri[maxIndex].model);
    printf("Uretim yili-> %d\n", galeri[maxIndex].yil);
    printf("Fiyati($)-> %.3f\n", galeri[maxIndex].fiyat);

}

void listele(struct Araba galeri[], int boyut){
    printf("Girilen araclarin listesi: \n");
    for(int i=0; i<boyut; i++){
        printf("Marka-> %s", galeri[i].marka);
        printf("Model-> %s", galeri[i].model);
        printf("Uretim yili-> %d\n", galeri[i].yil);
        printf("Fiyati($)-> %.3f\n\n", galeri[i].fiyat);
    }
}