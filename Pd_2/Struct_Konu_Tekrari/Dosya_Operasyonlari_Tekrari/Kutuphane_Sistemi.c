#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    int uniqueKey;
    char kitapAdi[20];
    char yazar[30];
    char kategori[20];
    int mevcutStok;
}KitapID; 

void kitapEkle(); //kitapları kutuphane.dat dosyasına ekler.
void kitapAra(); //kullanıcının istediği kitabı bulup gösterir.
void stokGuncelle(); //kitap ödünç alındığında stoktan 1 azaltır iade edildiğinde 1 arttırır.
void kritikSeviyeRaporu(); //stok miktarı 3ün altına düşen kitapları kritikStok.dat dosyasına ACİL TEDARİK başlığı ile listeler.
void yazarIstatistigi();  //Belirli bir yazarın kütüphanede kaç farklı kitabı olduğunu ve toplam kitap sayısını hesaplayıp konsola yazdırmalıdır.

int main(){

    FILE* dosya; 

    dosya = fopen("kutuphane.dat", "w");
    if(dosya == NULL){
        printf("\nDosya olusturulamadi!\n\n");
        return 1;
    }
    else {
        printf("\nDosya basariyla olusturuldu.\n\n");
    }

    printf("\n-------------KUTUPHANE SISTEMI-------------\n");
    int secim;

    while(1){
        printf("\nYapmak Istediginiz Islemi Girin: \n");
        printf("1)Kitap Ekle\n");
        printf("2)Kitap Ara\n");
        printf("3)Stok Guncelle\n");
        printf("4)Stok Raporuna Bak\n");
        printf("5)Yazar Istatigi\n");
        printf("0)Cikis\n");
        scanf("%d", &secim);

        switch(secim){
            case 1:
                kitapEkle();
                break;
            /*case 2:
                kitapAra();
                break;
            case 3:
                stokGuncelle();
                break;
            case 4:
                kritikSeviyeRaporu();
                break;
            case 5:
                yazarIstatistigi();
                break;*/
            case 0:
                printf("\nCikis Yapiliyor...\n\n");
                return 0;
            default:
                printf("\nGecersiz Islem!\n\n");
        }
    }

    fclose(dosya);
    return 0;
}

void kitapEkle(){
    FILE* dosya;
    KitapID kitaplar;
    dosya = fopen("kutuphane.dat", "a");

    if(dosya == NULL){
        printf("\nDosya Acilamadi!\n\n");
        return;
    }
    
    printf("\nEklenecek Kitabın Bilgilerini Girin: \n");
    
    printf("Kitap Kodu: ");
    scanf("%d", &kitaplar.uniqueKey);

    printf("Kitap Ismi: ");
    scanf("%s", kitaplar.kitapAdi);

    printf("Kategori: ");
    scanf("%s", kitaplar.kategori);
    
    printf("Yazar: ");
    scanf("%s", kitaplar.yazar);

    printf("Mevcut Stok: ");
    scanf("%d", &kitaplar.mevcutStok);

    fprintf(dosya, "%-10d %-18s %-18s %-15s %5d", kitaplar.uniqueKey, kitaplar.kitapAdi, kitaplar.kategori, kitaplar.yazar, kitaplar.mevcutStok);
    fclose(dosya);
}