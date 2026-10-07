#include <stdio.h>

float ortalamaHesapla(int arr[], int boyut);
int enBuyukBul(int arr[], int boyut);
int enKucukBul(int arr[], int boyut);

int main(){

    int myArray[10] = {10,30,25,45,5,70,35,95,125,60};
    int boyut = 10;

    float ortalama = ortalamaHesapla(myArray, boyut);
    printf("\nDizinin Ortalamasi --> %.2f", ortalama);

    printf("\n\nDizideki En Buyuk Sayi --> %d", enBuyukBul(myArray, boyut));

    printf("\n\nDizideki En Kucuk Sayi --> %d", enKucukBul(myArray, boyut));

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

int enBuyukBul(int arr[], int boyut){
    int buyuk = arr[0];
    int i;
    for(i=0; i<boyut; i++){
        if(arr[i] > buyuk){
            buyuk = arr[i];
        }
    }

    return buyuk;  
}

int enKucukBul(int arr[], int boyut){
    int kucuk = arr[0];
    int i;
    for(i=0; i<boyut; i++){
        if(arr[i] < kucuk){
            kucuk = arr[i];
        }
    }
    return kucuk;
}