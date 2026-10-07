#include <stdio.h>

int main(){

    char harf;
    printf("Bir Harf Giriniz: ");
    scanf("%c", &harf);
    printf("Girilen Harf: %c", harf);

    while (getchar() != '\n');
        printf("\nKapatmak icin Enter'a basin.");
    getchar();
    
    return 0;
}