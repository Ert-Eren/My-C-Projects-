#include <stdio.h>

struct ogrenciKayit{
    char ad[50];
    int no;
    int sinif;
    float not;
};

int main(){

    struct ogrenciKayit ogr;
    printf("Ad Soyad: ");
    fgets(ogr.ad, sizeof(ogr.ad), stdin);
    
    printf("Ogrenci No: ");
    scanf("%d", &ogr.no);

    printf("Sinif: ");
    scanf("%d", &ogr.sinif);

    printf("Ortalama: ");
    scanf("%f", &ogr.not);

    return 0;
}