#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int no;
    char isim[100];
    int yas;
    char bilgi[100];
}Hasta;

void dosyaOlustur();
void yeniKayit();
void kayitSil();
void kayitDuzenle();
void kayitListele();
void noyaGoreArama();

int main(){

    int secim;
    while(1){
        printf("\n------ HASTA TAKIP SISTEMI ------\n");
        printf("1. Yeni Dosya Olustur\n");
        printf("2. Yeni Hasta Kaydı Ekle\n");
        printf("3. Hasta Kaydı Sil\n");
        printf("4. Hasta Kaydı Duzenle\n");
        printf("5. Hasta Kaydı Listele\n");
        printf("6. Numaraya Gore Arama\n");
        printf("0. Cikis\n");
        
        scanf("%d", &secim);

        switch(secim){
            case 1:
                dosyaOlustur();
                break;
            case 2:
                yeniKayit();
                break;
            case 5:
                kayitListele();
                break;
            case 0:
                printf("Cikis yapiliyor...\n");
                return 0;
            default:
                printf("Gecersiz Islem!\n");
        }
    }
    
    return 0;
}

void dosyaOlustur(){
    
    FILE* dosya;

    dosya = fopen("Hasta.txt", "w");
    if(dosya == NULL){
        puts("Dosya Olusturulamadi!\n");
    }
    else{
        printf("Dosya Basariyla Olusturuldu.\n");
    }
    fclose(dosya);
}

void yeniKayit(){
    
    FILE* dosya;

    dosya = fopen("Hasta.txt", "a");
    if(dosya == NULL){
        printf("HATA! Dosya Acilamadi.\n");
        return;
    }

    Hasta hasta;

    printf("Hastanin numarasini girin: ");
    scanf("%d", &hasta.no);
    
    printf("Hastanin ismini girin: ");
    scanf("%s", hasta.isim);
    
    printf("Hastanin yasini girin: ");
    scanf("%d", &hasta.yas);
    
    printf("Hastanin sikayetini girin: ");
    scanf("%s", hasta.bilgi);

    fprintf(dosya, "%d | %s | %d | %s \n", hasta.no, hasta.isim, hasta.yas, hasta.bilgi);

    fclose(dosya);
    printf("Kayit Ekleme Basarili\n");
}

void kayitListele(){

    FILE* dosya;
    
    dosya = fopen("Hasta.txt", "r");
    if(dosya == NULL){
        printf("Dosya Acilamadi!\n");
        return;
    } 

    Hasta hasta;

    printf("\n%-10s %-25s %-15s %5s", "NO", "ISIM", "YAS", "BILGI");
    printf("\n----------------------------------------------------------\n");

    while(fscanf(dosya, "%d | %[^|] | %d | %[^\n]", &hasta.no, hasta.isim, &hasta.yas, hasta.bilgi) != EOF){
        printf("%-10d %-25s %-15d %5s\n", hasta.no, hasta.isim, hasta.yas, hasta.bilgi);
    }


    fclose(dosya);
}