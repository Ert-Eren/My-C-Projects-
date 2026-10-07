#include <stdio.h>

int main(){

    char ad[12];
    char soyad[15];

    printf("Adinizi girin: ");
    scanf("%s", &ad);

    printf("Soyadinizi girin: ");
    scanf("%s", &soyad);

    printf("Adiniz: %s\n", ad);
    printf("Soyadiniz: %s\n", soyad);

    while (getchar() != '\n');
        printf("\nKapatmak icin Enter'a basin.");
    getchar();

    return 0;
}