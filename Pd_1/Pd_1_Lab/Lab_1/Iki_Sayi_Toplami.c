#include <stdio.h>

int main(){

    int sayi1, sayi2, toplam;
    printf("Iki adet sayi giriniz: \n");
    scanf("%d %d", &sayi1, &sayi2);

    toplam = sayi1 + sayi2;
    printf("Sayilarin Toplami: %d\n", toplam);
    
    while (getchar() != '\n');
        printf("\nKapatmak icin Enter'a basin.");
    getchar();
    
    return 0;
}