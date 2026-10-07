#include <stdio.h>

float ortalamaHesapla(int arr[], int boyut);
int enBuyukSayi(int arr[], int boyut);
int enKucukSayi(int arr[], int boyut);

int main(){

    int boyut;

    printf("Gireceginiz sayinin adedini girin: ");
    scanf("%d", &boyut);

    int dizi[boyut];

    printf("Sayilari girin: \n");
    int i;
    for(i=0; i<boyut; i++){
        printf("%d. Sayi -> ", i+1);
        scanf("%d", &dizi[i]);
    }

    printf("\nGirilen sayilarin ortalamasi --> %.2f", ortalamaHesapla(dizi,boyut));

    printf("\nEn buyuk sayi --> %d", enBuyukSayi(dizi,boyut));

    printf("\nEn kucuk sayi --> %d", enKucukSayi(dizi,boyut));

    return 0;
}

float ortalamaHesapla(int arr[], int boyut){
    float toplam = 0.0;
    int i;
    for(i=0; i<boyut; i++){
        toplam += arr[i];
    }

    return toplam / boyut;
}

int enBuyukSayi(int arr[], int boyut){
    int buyuk = arr[0];
    int i;
    for(i=0; i<boyut; i++){
        if (arr[i] > buyuk){
            buyuk = arr[i];
        }
    }
    return buyuk;
}

int enKucukSayi(int arr[], int boyut){
    int kucuk = arr[0];
    int i;
    for(i=0; i<boyut; i++){
        if (arr[i] < kucuk){
            kucuk = arr[i];
        }
    }
    return kucuk;
}