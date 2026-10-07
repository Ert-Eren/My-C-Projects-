#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char kursAdi[40]; // DÜZELTME: Tek bir karakter yerine string (karakter dizisi) yaptık.
    int kontenjan;
} Kurs;

int main() {
    int kursSayi;
    printf("Acilacak kurs sayisini gir: ");
    scanf("%d", &kursSayi);

    // DÜZELTME: Kurs pointer'larını tutacak ana pointer dizisi için bellekte yer açıyoruz.
    // Bu yapı dinamik bir pointer dizisidir (Kurs* dizisi).
    Kurs** kurslar = (Kurs**)malloc(kursSayi * sizeof(Kurs*));
    
    if (kurslar == NULL) {
        printf("Bellek ayrilamadi!\n");
        return 1;
    }

    printf("\n--- Kurs Bilgilerini Gir ---\n");
    for (int i = 0; i < kursSayi; i++) {
        // DÜZELTME: Her bir kurs nesnesinin kendisi için bellekte ayrı ayrı yer açıyoruz.
        kurslar[i] = (Kurs*)malloc(sizeof(Kurs));
        
        printf("\n%d. Kurs:\n", i + 1);
        printf("Kurs Adi: ");
        scanf("%s", kurslar[i]->kursAdi); // DÜZELTME: Ok (->) operatörü ile doğrudan eriştik.

        printf("Kurs Kontenjani: ");
        scanf("%d", &kurslar[i]->kontenjan);
    }   

    // Alınan bilgileri ekrana yazdırarak test edelim (Veriler silindi mi görelim)
    printf("\n--- Kaydedilen Kurslar ---\n");
    for (int i = 0; i < kursSayi; i++) {
        printf("%d. Kurs: %s (Kontenjan: %d)\n", i + 1, kurslar[i]->kursAdi, kurslar[i]->kontenjan);
    }

    // DÜZELTME: TEMİZLİK (İçten Dışa)
    // Önce her bir kursun kendi belleğini serbest bırakıyoruz.
    for (int i = 0; i < kursSayi; i++) {
        free(kurslar[i]);
    }
    // En son, bu pointer'ları tutan ana dizinin belleğini serbest bırakıyoruz.
    free(kurslar);

    printf("\nBellek basariyla temizlendi ve program kapatildi.\n");
    return 0;
}