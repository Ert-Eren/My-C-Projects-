#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Rehber{
    int listeNo;
    long int telNo;
    char isim[20];
}telefon;

void dosyaOlustur();
void kayitEkle();
void kayitSil();
void kayitListele();
void cikis();

int main(){
    int secim;

    printf("\n-----------------TELEFON REHBERI-----------------\n\n");
    while (1){
        printf("Yapmak istediginiz islemi secin: \n");
        printf("1)Rehber Dosyasi Olustur\n");
        printf("2)Rehbere Kayit Ekle\n");
        printf("3)Rehberden Kayit Sil\n");
        printf("4)Girilen Kayitlari Listele\n");
        printf("5)Cikis Yap\n");
        
        scanf("%d", &secim);

        switch(secim){
            case 1:
                dosyaOlustur();
                break;
            case 2:
                kayitEkle();
                break;
            case 3:
                kayitSil();
                break;
            case 4:
                kayitListele();
                break;
            case 5:
                cikis();
                break;
            default:
                printf("\nGecersiz Islem!\n\n");
                return 0;
        }
    }
   

    return 0;
}

void dosyaOlustur(){
    telefon reh = {0, 0, ""};
    FILE* dosya;
    dosya = fopen("Telefon_Rehberi.txt", "w");

    if (dosya == NULL){
        printf("\nDosya Olusturulamadi!\n\n");
        return;
    }
    else{
        for(int i=0; i<100; i++){
            fwrite(&reh, sizeof(telefon), 1, dosya);
        }
        printf("\nDosya Olusturma Basarili!\n\n");
        fclose(dosya);
    }
}

void kayitEkle(){
    telefon reh;
    FILE* dosya;
    dosya = fopen("Telefon_Rehberi.txt", "r+");

    if(dosya == NULL){
        printf("\nDosya Acilamadi!\n\n");
        return;
    }
    else{
        printf("\nBilgileri Gir: \n");

        printf("Liste No: ");
        scanf("%d",&reh.listeNo);

        printf("Telefon Numarasi: ");
        scanf("%ld", &reh.telNo);

        printf("Kisi Ismi: ");
        scanf("%s", reh.isim);

        fseek(dosya, (reh.listeNo-1)*sizeof(telefon),SEEK_SET);
        fwrite(&reh, sizeof(telefon), 1, dosya);
    }
    printf("\nKayit Ekleme Basarili\n\n");
    fclose(dosya);
}

void kayitListele(){
    telefon reh;
    FILE* dosya;
    dosya = fopen("Telefon_Rehberi.txt", "r");

    if(dosya == NULL){
        printf("\nDosya Acilamadi\n\n");
        return;
    }
    else{
        printf("\n");
        while(fread(&reh, sizeof(telefon), 1, dosya) == 1){
            if(reh.listeNo != 0){
                printf("%-10d %-20ld %-10s\n", reh.listeNo, reh.telNo, reh.isim);
            }
        }
    }
    printf("\nListeleme Basarili!\n\n");
    fclose(dosya);
}

void kayitSil(){
    long int silinecekTelNo;
    telefon reh;
    telefon bosReh ={0, 0, ""};
    FILE* dosya;

    dosya = fopen("Telefon_Rehberi.txt", "r+");
    if(dosya == NULL){
        printf("\nDosya Acilamadi!\n\n");
        return;
    }
    else{
        printf("\nSilmek Istediginiz Telefon Numarasini Girin: ");
        scanf("%ld", &silinecekTelNo);

        fseek(dosya, (silinecekTelNo-1)*sizeof(telefon), SEEK_SET);
        fwrite(&bosReh, sizeof(telefon), 1, dosya);
    }
    printf("\n%ld Numarasi Silindi\n\n", silinecekTelNo);
    fclose(dosya);
}

void cikis(){
    printf("\nCikis Yapiliyor...\n\n");
    exit(0);
}