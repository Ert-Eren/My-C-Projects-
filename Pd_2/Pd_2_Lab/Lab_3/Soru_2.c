//Verilen bir sayi dizisinin ortalamasını rekürsif fonksiyon kullanarak alan program
#include <stdio.h>

int main(){

    int dizi[6] = {1,2,3,4,5,6};

    float ortalama;
    float toplam = 0.0;

    for(int i = 0; i<6; i++){
        toplam += dizi[i];
    }

    ortalama = toplam / 6;
    
    printf("%.2f", ortalama);

    return 0;
}


/*
int ortalama(int dizi[], int boyut){

}
*/


/*
dizi(1) = 1
dizi(2) = 2
.
.
.
.
dizi(n) = m
*/