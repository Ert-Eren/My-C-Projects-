#include <stdio.h>

int main(){

    char isim[15];
    
    //%s nin kullanım amacı string bir ifade girileceği için
    printf("Adinizi girin: ");
    scanf("%s", isim);
    printf("Girilen ad: %s", isim);
    
    return 0;
}