// üçlü koşullu operatör kullanarak sayıların pozitif veya negatif oldugunu bulma

#include <stdio.h>

int main(){

    int sayi;
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);

    char* sonuc = (sayi > 0) ? "pozitif" : (sayi < 0) ? "negatif" : "sifir";
    printf("Sectigin sayi= %s\n", sonuc);

    while (getchar() != '\n');
        printf("\nKapatmak icin Enter'a basin.");
    getchar();
    
    return 0;
}