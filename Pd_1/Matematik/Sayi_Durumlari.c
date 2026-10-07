// Girilen sayıların büyüklük, küçüklük, eşitlik durumunu kontrol eder.

#include <stdio.h>

int main() {

    int a,b,c,d;
    
    printf("a degerini giriniz ");
    scanf("%d", &a);
    printf("b degerini giriniz ");
    scanf("%d", &b);

    if (a > b) {
        printf("a sayisi b sayisindan buyuk. \n");
    }
    else if (a < b) {
        printf("a sayisi b sayisindan kucuk. \n");
    }
    else if ( a == b) {
        printf("a sayisi b sayisina esit. \n");
    }

    while (getchar() != '\n');
        printf("\nKapatmak icin Enter'a basin.");
    getchar();
    
    return 0;
}