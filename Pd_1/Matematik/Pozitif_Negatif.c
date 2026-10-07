// Girilen sayinin pozitif veya negatif oldugunu bulma

#include <stdio.h>

int main() {

    int sayi;
    
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);

    if (sayi == 0) {
        printf("Sectigin sayi sifir");
    }    
    else if (sayi > 0) {
        printf("Sectigin sayi pozitif");
    }
    else if (sayi < 0) {
        printf("Sectigin sayi negatif");
    }

    while (getchar() != '\n');
        printf("\nKapatmak icin Enter'a basin.");
    getchar();
    
    return 0;
}