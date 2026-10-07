#include <stdio.h>

float sinifOrtalamasi(float arr[], int boyut);
int gecenSayisi(float arr[], int boyut, float gecmeNotu);
int kalanSayisi(float arr[], int boyut, float gecmeNotu);

int main(){

    int ogrenciSayi;
    float gecmeNotu = 50.0;
    
    printf("-------------------- Ogrenci Not Degerlendirme Sistemi --------------------\n\n");
    printf("Ogrenci sayisini girin: ");
    scanf("%d", &ogrenciSayi);

    float notlar[ogrenciSayi];

    printf("Ogrencilerin notlarini girin: \n");
    int i;
    for(i=0; i<ogrenciSayi; i++){
        printf("%d. Ogrenci -> ",i+1);
        scanf("%f", &notlar[i]);
    }
    
    printf("\n--- Donem Sonu Istatistikleri ---\n\n");
    printf("Sinif Ortalamasi: %.2f\n", sinifOrtalamasi(notlar, ogrenciSayi));
    printf("Dersi Gecen Ogrenci Sayisi: %d\n", gecenSayisi(notlar, ogrenciSayi, gecmeNotu));
    printf("Dersten Kalan Ogrenci Sayisi: %d\n", kalanSayisi(notlar, ogrenciSayi, gecmeNotu));
    
    return 0;
}

float sinifOrtalamasi(float arr[], int boyut){
    float toplam = 0;
    int i;
    for(i=0; i<boyut; i++){
        toplam += arr[i];
    }

    return toplam / boyut;
}

int gecenSayisi(float arr[], int boyut, float gecmeNotu){
    int gecen = 0;
    int i;
    for(i=0; i<boyut; i++){
        if (arr[i] >= gecmeNotu){
            gecen ++;
        }
    }
    return gecen;
}

int kalanSayisi(float arr[], int boyut, float gecmeNotu){
    int kalan = 0;
    int i;
    for(i=0; i<boyut; i++){
        if (arr[i] < gecmeNotu){
            kalan ++;
        }
    }
    return kalan;
}