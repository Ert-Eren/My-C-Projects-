#include <stdio.h>

int main(){

    int sayi;
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);

    if (sayi == 0){
        printf("Girilen sayi sifir. \n");
    }
    else if (sayi > 0){
        printf("Girilen sayi pozitif. \n");
    }
    else if (sayi < 0){
        printf("Girilen sayi negatif. \n");
    }
    else{
        printf("Gecersiz deger girdiniz! \n");
    }

    while (getchar() != '\n');
        printf("\nKapatmak icin Enter'a basin.");
    getchar();
    
    return 0;
}