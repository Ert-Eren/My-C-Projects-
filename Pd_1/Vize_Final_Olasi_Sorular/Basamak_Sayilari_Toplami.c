#include <stdio.h>

int main(){

    int sayi,rakam,geciciSayi;
    int toplam = 0;

    printf("\nSayi gir: ");
    scanf("%d", &sayi);

    geciciSayi = sayi;

    while(geciciSayi > 0){
        rakam = geciciSayi % 10;
        toplam = toplam + rakam;
        geciciSayi = geciciSayi / 10;
    }

    printf("\nGirilen sayinin basamaklari toplami = %d\n", toplam);

    return 0;
}