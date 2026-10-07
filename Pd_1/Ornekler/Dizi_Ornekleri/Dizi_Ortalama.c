#include <stdio.h>

int diziOrt(int dizi[], int boyut){
    float ort;
    int top = 0;
    int i;
    for(i=0; i<boyut; i++){
        top = top + dizi[i];
    }
    ort = top / boyut;
    return ort;
}

int main(){

    int sayilar[5] = {10,20,30,40,50};

    float sonuc = diziOrt(sayilar, 5);

    printf("Ortalama = %.2f", sonuc);
    
    return 0;
}