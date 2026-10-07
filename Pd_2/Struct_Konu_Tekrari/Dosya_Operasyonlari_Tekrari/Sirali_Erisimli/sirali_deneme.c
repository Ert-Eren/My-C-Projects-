#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Ogrenci{
    int siraNo;
    long int okulNo;
    char isim[20];
    float vize,final;
}ogrenci;

void dosyaOlustur();
void ogrenciEkle();
void ogrenciListele();
void dosyayiAktar();

int main(){

    int secim;
    printf("\n--------OGRENCI NOT SISTEMI--------\n\n");

    while (1){
        printf("Yapmak Istediginiz Islemi Secin: \n");
        printf("1) Ogrenci Dosyasini Olustur\n");
        printf("2) Ogrenci Ekle\n");
        printf("3) Ogrencileri Listele\n");
        printf("4) Girilenleri Baska Dosyaya Aktar\n");
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
                ogrenciListele();
                break;
            case 4:
                dosyayiAktar();
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
    ogrenci ogr;
    FILE* dosya;

    dosya = fopen("AnaDosya.txt", "w");
    if (dosya == NULL){
        printf("\nDosya Olusturulamadi!\n\n");
        return;
    }
    else{
        printf("\nDosya Basariyla Olusturuldu!\n\n");
    }
    fclose(dosya);
}

void ogrenciEkle(){
    ogrenci ogr;
    FILE* dosya;
    dosya = fopen("AnaDosya.txt", "a");

    if (dosya == NULL){
        printf("\nDosya Acilamadi!\n\n");
        return;
    }

    printf("\nOgrenci Bilgilerini Girin:\n");
    printf("Sira No(1-100): ");
    scanf("%d", &ogr.siraNo);

    printf("Ogrenci No: ");
    scanf("%ld", &ogr.okulNo);

    printf("Isim: ");
    scanf("%s", ogr.isim);

    printf("Vize Notu: ");
    scanf("%f", &ogr.vize);
    
    printf("Final Notu: ");
    scanf("%f", &ogr.final);

    fprintf(dosya, "%-10d %-20ld %-20s %-20.2f %-10.2f\n", ogr.siraNo, ogr.okulNo, ogr.isim, ogr.vize, ogr.final);

    printf("\nOgrenci Ekleme Basarili\n\n");
    fclose(dosya);
}

void ogrenciListele(){
    ogrenci ogr;
    FILE* dosya;
    dosya = fopen("AnaDosya.txt", "r");

    if (dosya == NULL){
        printf("\nDosya Acilamadi!\n\n");
        return;
    }
    printf("\n");
    printf("%-10s %-20s %-20s %-20s %-10s\n", "SIRA NO", "OGRENCİ NO", "ISIM", "VIZE NOTU", "FINAL NOTU");
    printf("---------------------------------------------------------------------------------------\n");

    while(fscanf(dosya, "%d %ld %s %f %f", &ogr.siraNo, &ogr.okulNo, ogr.isim, &ogr.vize, &ogr.final) != EOF){
        printf("%-10d %-20ld %-20s %-20.2f %-10.2f\n", ogr.siraNo, ogr.okulNo, ogr.isim, ogr.vize, ogr.final);
    }

    printf("\nListeleme Basarili\n\n");
    fclose(dosya);
}

void dosyayiAktar(){
    ogrenci ogr;
    FILE* dosya;
    FILE* yedekDosya;
    char satir[100];

    dosya = fopen("AnaDosya.txt", "r");
    yedekDosya = fopen("YedekDosya.txt", "w");

    if(dosya == NULL || yedekDosya == NULL){
        printf("\nDosyalar Acilamadi!\n\n");
        return;
    }

    while(fgets(satir, sizeof(satir), dosya)){
        fprintf(yedekDosya, "%s", satir);
    }

    printf("\nAktarim Basarili\n\n");
    
    fclose(dosya);
    fclose(yedekDosya);
}