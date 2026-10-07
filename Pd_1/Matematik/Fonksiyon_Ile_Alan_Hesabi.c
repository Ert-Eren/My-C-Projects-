#include <stdio.h>

float alanHesabi(float kenar1, float kenar2){
    return kenar1 * kenar2;
}


int main(){

    float kenar1, kenar2;

    printf("2 adet kenar uzunlugu girin: ");
    scanf("%f %f", &kenar1, &kenar2);

    float alan = alanHesabi(kenar1,kenar2);

    printf("\nAlan = %2.f cm^2", alan);

    while(getchar() != '\n');
        printf("\n\nKapatmak icin Enter'a basin.");
    getchar();

    return 0;
}