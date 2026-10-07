#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Ogrenci{
    char adSoyad[30];
    int yas;
    float notOrt;
};

int main(){

    struct Ogrenci ogrBilgi;

    printf("\n------Ogrenci Kayit Sistemi------\n");
    printf("Ogrencinin ismini girin: ");
    fgets(ogrBilgi.adSoyad, sizeof(ogrBilgi.adSoyad), stdin);

    printf("Ogrencinin yasini girin: ");
    scanf("%d", &ogrBilgi.yas);

    printf("Ogrencinin not ortalamasini girin: ");
    scanf("%f", &ogrBilgi.notOrt);

    printf("=====================\n=====================\n");

    printf("------Ogrenci Bilgisi------\n");
    printf("Ad soyad -> %s", ogrBilgi.adSoyad);
    printf("Yas -> %d\n", ogrBilgi.yas);
    printf("Not ortalamasi -> %.2f\n", ogrBilgi.notOrt);

    return 0;
}