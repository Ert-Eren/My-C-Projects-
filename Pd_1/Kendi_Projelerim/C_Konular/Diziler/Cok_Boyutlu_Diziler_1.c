#include <stdio.h>

int main(){

    
    int dizi[2][2];

    dizi[0][0] = 10;
    dizi[0][1] = 20;
    dizi[1][0] = 30;
    dizi[1][1] = 40;
    
    printf("\n");
    
    printf("Dizinin 0-0 da bulunan elemani: %d\n", dizi[0][0]);
    printf("Dizinin 0-1 de bulunan elemani: %d\n", dizi[0][1]);
    printf("Dizinin 1-0 da bulunan elemani: %d\n", dizi[1][0]);
    printf("Dizinin 1-1 de bulunan elemani: %d\n", dizi[1][1]);

    while(getchar() != '\n');
        printf("Kapatmak icin Enter'a basin.");
    getchar();
    return 0;
}