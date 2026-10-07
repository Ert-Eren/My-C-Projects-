// Girilen sayinin tek cift oldugunu bulma

#include <stdio.h>

int main() {

    int sayi;
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);

    if (sayi % 2 == 0){
        printf("Secilen sayi cift");
    }
    
    else {
        printf("Secilen sayi tek");
    }

    while (getchar() != '\n');
        printf("\nKapatmak icin Enter'a basin.");
    getchar();
    
    return 0;
}