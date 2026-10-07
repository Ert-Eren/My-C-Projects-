//Klavyeden girilen sayının palindrom sayı olup olmadığını bulan program
//Palindrom sayılar tersten okunuşu da aynı olan sayılardır. ör: 0, 88, 101, 323...

#include <stdio.h>

int main(){

    int kalan, sayi, gecici_sayi;
    int ters = 0;

    printf("Bir sayi girin: ");
    scanf("%d", &sayi);

    gecici_sayi = sayi;

    while(gecici_sayi != 0){
        kalan = gecici_sayi % 10;
        ters = (ters * 10) + kalan;
        gecici_sayi /= 10;
    }
    
    if (ters == sayi){
        printf("Girilen Sayi Palindrom Sayidir.\n");
    }
    else{
        printf("Girilen Sayi Palindrom Sayi degildir.\n");
    }

    return 0;
}