#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Öğrenci bilgilerini tutan düğüm (Node) yapısı
struct Ogrenci {
    int numara;
    char ad[50];
    float vize;
    float finalNotu;
    float basariNotu;
    struct Ogrenci* sonraki;
};

// Yeni bir öğrenci düğümü oluşturan yardımcı fonksiyon
struct Ogrenci* ogrenciOlustur(int numara, char ad[], float vize, float finalNotu) {
    struct Ogrenci* yeniOgrenci = (struct Ogrenci*)malloc(sizeof(struct Ogrenci));
    yeniOgrenci->numara = numara;
    strcpy(yeniOgrenci->ad, ad);
    yeniOgrenci->vize = vize;
    yeniOgrenci->finalNotu = finalNotu;
    yeniOgrenci->basariNotu = (vize * 0.4) + (finalNotu * 0.6); // Başarı notu hesaplama
    yeniOgrenci->sonraki = NULL;
    return yeniOgrenci;
}

// Listeye yeni kayıt ekleme (Listenin sonuna ekler)
struct Ogrenci* kayitEkle(struct Ogrenci* baslangic, int numara, char ad[], float vize, float finalNotu) {
    struct Ogrenci* yeni = ogrenciOlustur(numara, ad, vize, finalNotu);
    
    if (baslangic == NULL) {
        return yeni;
    }
    
    struct Ogrenci* gecici = baslangic;
    while (gecici->sonraki != NULL) {
        gecici = gecici->sonraki;
    }
    gecici->sonraki = yeni;
    printf("%d numarali ogrenci basariyla eklendi.\n", numara);
    return baslangic;
}

// Numaraya göre kayıt silme
struct Ogrenci* kayitSil(struct Ogrenci* baslangic, int numara) {
    if (baslangic == NULL) {
        printf("Liste bos, silinecek ogrenci yok!\n");
        return NULL;
    }
    
    struct Ogrenci* gecici = baslangic;
    struct Ogrenci* onceki = NULL;
    
    // Silinecek eleman ilk düğüm ise
    if (gecici != NULL && gecici->numara == numara) {
        baslangic = gecici->sonraki;
        free(gecici);
        printf("%d numarali ogrenci silindi.\n", numara);
        return baslangic;
    }
    
    // Silinecek düğümü arama
    while (gecici != NULL && gecici->numara != numara) {
        onceki = gecici;
        gecici = gecici->sonraki;
    }
    
    // Öğrenci bulunamadıysa
    if (gecici == NULL) {
        printf("%d numarali ogrenci listede bulunamadi.\n", numara);
        return baslangic;
    }
    
    // Bağlantıyı koparma ve belleği özgür bırakma
    onceki->sonraki = gecici->sonraki;
    free(gecici);
    printf("%d numarali ogrenci silindi.\n", numara);
    return baslangic;
}

// Öğrencileri ve başarı notlarını listeleme
void ogrencileriListele(struct Ogrenci* baslangic) {
    if (baslangic == NULL) {
        printf("Listelenecek ogrenci bulunamadi.\n");
        return;
    }
    
    struct Ogrenci* gecici = baslangic;
    printf("\n--- OGRENCI LISTESI ---\n");
    printf("%-10s %-20s %-6s %-6s %-10s\n", "Numara", "Ad Soyad", "Vize", "Final", "Basari Notu");
    while (gecici != NULL) {
        printf("%-10d %-20s %-6.2f %-6.2f %-10.2f\n", 
               gecici->numara, gecici->ad, gecici->vize, gecici->finalNotu, gecici->basariNotu);
        gecici = gecici->sonraki;
    }
}

// Sınıfın en yüksek başarı notuna sahip öğrencisini bulma
void enYuksekBasariNotu(struct Ogrenci* baslangic) {
    if (baslangic == NULL) {
        printf("Liste bos.\n");
        return;
    }
    
    struct Ogrenci* gecici = baslangic;
    struct Ogrenci* enBasarili = baslangic;
    
    while (gecici != NULL) {
        if (gecici->basariNotu > enBasarili->basariNotu) {
            enBasarili = gecici;
        }
        gecici = gecici->sonraki;
    }
    
    printf("\n--- EN YUKSEK BASARI NOTUNA SAHIP OGRENCI ---\n");
    printf("Numara: %d\nAd: %s\nVize: %.2f\nFinal: %.2f\nBasari Notu: %.2f\n", 
           enBasarili->numara, enBasarili->ad, enBasarili->vize, enBasarili->finalNotu, enBasarili->basariNotu);
}

// Sınıfın başarı notu ortalamasını hesaplama
void sinifOrtalamasiHesapla(struct Ogrenci* baslangic) {
    if (baslangic == NULL) {
        printf("Liste bos, ortalama hesaplanamaz.\n");
        return;
    }
    
    struct Ogrenci* gecici = baslangic;
    float toplam = 0;
    int sayac = 0;
    
    while (gecici != NULL) {
        toplam += gecici->basariNotu;
        sayac++;
        gecici = gecici->sonraki;
    }
    
    printf("\nSinif Mevcudu: %d\n", sayac);
    printf("Sinifin Basari Notu Ortalamasi: %.2f\n", toplam / sayac);
}

// Ana Fonksiyon (Menu Yapısı)
int main() {
    struct Ogrenci* root = NULL; // Liste başlangıcı (head)
    int secim, numara;
    char ad[50];
    float vize, finalNotu;
    
    while (1) {
        printf("\n======= OGRENCI BILGI SISTEMI =======\n");
        printf("1. Kayit Ekle\n");
        printf("2. Kayit Sil\n");
        printf("3. Ogrencileri Listele (Basari Notu ile)\n");
        printf("4. En Yuksek Basari Notuna Sahip Ogrenciyi Goster\n");
        printf("5. Sinif Ortalamasini Goster\n");
        printf("6. Cikis\n");
        printf("Seciminiz: ");
        scanf("%d", &secim);
        
        switch (secim) {
            case 1:
                printf("Numara: "); scanf("%d", &numara);
                printf("Ad Soyad: "); scanf(" %[^\n]s", ad); // Boşluklu karakter alabilmek için
                printf("Vize: "); scanf("%f", &vize);
                printf("Final: "); scanf("%f", &finalNotu);
                root = kayitEkle(root, numara, ad, vize, finalNotu);
                break;
            case 2:
                printf("Silinecek Ogrenci Numarasi: "); scanf("%d", &numara);
                root = kayitSil(root, numara);
                break;
            case 3:
                ogrencileriListele(root);
                break;
            case 4:
                enYuksekBasariNotu(root);
                break;
            case 5:
                sinifOrtalamasiHesapla(root);
                break;
            case 6:
                printf("Programdan cikiliyor...\n");
                // Bellek temizliği (Garbage Collection benzeri) yapılabilir.
                return 0;
            default:
                printf("Gecersiz secim! Tekrar deneyin.\n");
        }
    }
    return 0;
}