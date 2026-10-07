// Dikdörtgen Alan Hesaplama

#include <stdio.h>

int main() {

    int uzun_kenar,kisa_kenar,alan;

    printf("*************************\n");
    printf("Dikdortgen Alan Hesaplama Programi\n\n");

    printf("Kisa kenar uzunlugunu giriniz: ");
    scanf("%d", &kisa_kenar);

    printf("Uzun kenar uzunlugunu giriniz: ");
    scanf("%d", &uzun_kenar);

    printf("Alan = %d cm^2\n\n", uzun_kenar * kisa_kenar);
    printf("*************************\n");

    while (getchar() != '\n');
        printf("\nKapatmak icin Enter'a basin.");
    getchar();
    
    return 0;
}