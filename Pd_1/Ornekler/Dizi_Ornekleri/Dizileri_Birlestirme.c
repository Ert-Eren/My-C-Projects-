#include <stdio.h>

void diziBirlestir(char d1[], char d2[]){
    int i = 0, j = 0;

    while(d1[i] != '\0'){
        i++;
    }
    while(d2[j] != '\0'){
        d1[i] = d2[j];
        i++;
        j++;
    }
}

int main(){

    char ad[30];
    char soyad[10];

    printf("Adinizi girin: ");
    scanf("%s", ad);
    printf("Soyadinizi girin: ");
    scanf("%s", soyad);

    diziBirlestir(ad, soyad);

    printf("Birlestirilmis hali = %s", ad);
    return 0;
}