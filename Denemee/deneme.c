#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    int listNo;
    char isim[20];
    int stok;
    float fiyat;
}Baharat;

void dosyaOlustur();
void eklemeYap();
void sil();
void listele();

int main(){

    int secim;
    printf("\n----------------BAHARAT STOK TAKIP SISTEMI----------------\n");
    while(1){
        printf("\nYapmak Istediginiz Islemi Secin: \n\n");
        printf("1)Dosya Olustur\n");
        printf("2)Ekleme Yap\n");
        printf("3)Sil\n");
        printf("4)Listele\n");
        printf("0)Cikis\n");

        scanf("%d", &secim);

        switch(secim){
            case 1:
                dosyaOlustur();
                break;
            case 2:
                eklemeYap();
                break;
            case 3:
                sil();
                break;
            /*case 4:
                listele();
                break; */
            case 0:
                printf("\nCikis Yapiliyor...\n");
                return 0;
            default:
                printf("\nGecersiz Islem!\n");
        }
    }

    return 0;
}

void dosyaOlustur(){
    FILE* dosya;
    dosya = fopen("BaharatListesi.txt", "w");
    
    if(dosya == NULL){
        printf("\nDosya Olusturulamadi!\n\n");
        return;
    }

    fclose(dosya);
}

void eklemeYap(){
    Baharat bah;
    FILE* dosya;
    dosya = fopen("BaharatListesi.txt", "a");

    if(dosya == NULL){
        printf("\nDosya Acilamadi!\n\n");
        return;
    }

    printf("\nBaharat Bilgilerini Girin: \n");
    
    printf("Liste No: ");
    scanf("%d", &bah.listNo);

    printf("Baharat Ismi: ");
    scanf("%s", bah.isim);

    printf("Birim Fiyati: ");
    scanf("%f", &bah.fiyat);

    printf("Stok Bilgisi(kg): ");
    scanf("%d", &bah.stok);

    fprintf(dosya, "%-10d %-10s %-10.2f %5d\n",bah.listNo, bah.isim, bah.fiyat, bah.stok);

    printf("\nEkleme Basarili\n\n");
    fclose(dosya);
}

void sil(){
    int silinecekNo;
    Baharat bah;
    Baharat bahBos = {0, "", 0.0, 0};
    FILE* dosya;

    dosya = fopen("BaharatListesi.txt", "r");

    if (dosya == NULL){
        printf("\nDosya Acilamadi!\n\n");
        return;
    }

    printf("\nSilmek Istediginiz Liste Numarasini Girin: ");
    scanf("%d", &silinecekNo);

    if(silinecekNo == bah.listNo){
        fprintf(dosya, "%-10d %-10s %-10.2f %5d\n", bahBos.listNo, bahBos.isim, bahBos.fiyat, bahBos.fiyat, bahBos.stok);
        printf("\n%d Numarali Secenek Silindi\n\n", silinecekNo);
    }
    else{
        printf("\nGirilen Numaraya Ait Kayıt Bulunamadi!\n\n");
    }

    fclose(dosya);
}