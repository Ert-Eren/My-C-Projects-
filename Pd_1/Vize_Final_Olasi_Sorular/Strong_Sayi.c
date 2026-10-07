/* Bir sayının basamaklarının faktoriyeli toplamı 
sayının kendisine eşit olan sayılara strong sayılar denir.

ör: 145 --> 1! + 4! + 5! = 145 */

int faktoriyelHesap(int rakam);

#include <stdio.h>

int main(){

    int sayi, rakam, geciciSayi;
    int toplam = 0;

    printf("Sayi gir: ");
    scanf("%d", &sayi);

    geciciSayi = sayi;

    while(geciciSayi > 0){

        rakam = geciciSayi % 10;
        toplam = toplam + faktoriyelHesap(rakam);
        geciciSayi = geciciSayi / 10;
    }

    if(toplam == sayi){
        printf("%d bir strong sayidir.\n", sayi);
    }
    else{
        printf("%d bir strong sayi degildir.\n", sayi);
    }

    return 0;
}

int faktoriyelHesap(int rakam){
    
    int faktoriyel = 1;
    int i;
    
    for(i=1; i<=rakam; i++){
        faktoriyel = faktoriyel * i;
    }
    
    return faktoriyel;
}