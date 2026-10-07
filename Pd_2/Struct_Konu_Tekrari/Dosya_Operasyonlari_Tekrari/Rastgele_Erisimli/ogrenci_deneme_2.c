#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Ogrenci
{
    int siraNo;
    long int okulNo;
    char isim[20];
    float vize;
    float final;
} ogrenci;

void dosyaOlustur();
void ogrenciEkle();
void ogrenciSil();
void ogrenciListele();

int main(){

    int secim;

    printf("\n--------OGRENCI NOT SISTEMI--------\n\n");

    while (1){
        printf("Yapmak Istediginiz Islemi Secin: \n");
        printf("1) Ogrenci Dosyasini Olustur\n");
        printf("2) Ogrenci Ekle\n");
        printf("3) Ogrenci Sil\n");
        printf("4) Ogrencileri Listele\n");
        printf("0) Cikis\n");

        scanf("%d", &secim);

        switch (secim){

            case 1:
                dosyaOlustur();
                break;
            case 2:
                ogrenciEkle();
                break;
            case 3:
                ogrenciSil();
                break;
            case 4:
                ogrenciListele();
                break;
            case 0:
                printf("\nCikis Yapiliyor...\n");
                return 0;
            default:
                printf("\nGecersiz Islem!\n");
                return 0;
        }
    }

    return 0;
}

void dosyaOlustur(){
    ogrenci ogr = {0, 0, "", 0.0, 0.0};
    FILE *dosya;
    dosya = fopen("Ogrenci_Not_Sistemi.dat", "wb");

    if (dosya == NULL){
        printf("\nDosya Olusturulamadi!\n\n");
        return;
    }
    else{
        for (int i = 0; i < 100; i++){
            fwrite(&ogr, sizeof(ogrenci), 1, dosya);
        }
        printf("\nDosya Olusturma Basarili!\n\n");
        fclose(dosya);
    }
}

void ogrenciEkle(){
    ogrenci ogr;
    FILE *dosya;
    dosya = fopen("Ogrenci_Not_Sistemi.dat", "rb+");

    if (dosya == NULL){
        printf("\nDosya Acilamadi!\n\n");
        return;
    }
    else{
        printf("\nOgrenci Bilgilerini Ekle: \n");
        printf("Sira No(1-100): ");
        scanf("%d", &ogr.siraNo);

        printf("Okul No: ");
        scanf("%ld", &ogr.okulNo);

        printf("Isim: ");
        scanf("%s", ogr.isim);

        printf("Vize Notu: ");
        scanf("%f", &ogr.vize);

        printf("Final Notu: ");
        scanf("%f", &ogr.final);

        fseek(dosya, (ogr.siraNo - 1) * sizeof(ogrenci), SEEK_SET);
        fwrite(&ogr, sizeof(ogrenci), 1, dosya);
    }
    printf("\nOgrenci Ekleme Basarili!\n\n");
    fclose(dosya);
}

void ogrenciSil(){
    int silinecekNo;
    ogrenci ogr;
    ogrenci bosOgr = {0, 0, "", 0.0, 0.0};
    FILE *dosya;
    dosya = fopen("Ogrenci_Not_Sistemi.dat","rb+");

    if (dosya == NULL){
        printf("\nDosya Acilamadi!\n\n");
        return;
    }
    else{
        printf("\nSilmek Istediginiz Ogrencinin Sira Numarasini Girin: ");
        scanf("%d", &silinecekNo);

        fseek(dosya, (silinecekNo-1)*sizeof(ogrenci), SEEK_SET);
        fwrite(&bosOgr, sizeof(ogrenci), 1, dosya);
    }
    printf("\n%d Numarali Ogrenci Silindi.\n\n", silinecekNo);
    fclose(dosya);
}

void ogrenciListele(){
    ogrenci ogr;
    FILE* dosya;
    dosya = fopen("Ogrenci_Not_Sistemi.dat", "rb");

    if(dosya == NULL){
        printf("\nDosya Acilamadi!\n\n");
        return;
    }
    else{
        printf("\n");
        printf("%-10s %-20s %-20s %-20s %-10s\n", "SIRA NO", "OKUL NO" ,"ISIM", "VIZE NOT", "FINAL NOT");
        printf("-------------------------------------------------------------------------------------\n");
        while (fread(&ogr, sizeof(ogrenci), 1, dosya) == 1)
        {
            if (ogr.siraNo != 0)
            {
                printf("%-10d %-20ld %-20s %-20.2f %-10.2f\n", ogr.siraNo, ogr.okulNo, ogr.isim, ogr.vize, ogr.final);
            }
        }
    }
    fclose(dosya);
}