#include <stdio.h>

int main(){

    int a, b, c;
    printf("Iki sayi girin: ");
    scanf("%d %d", &a, &b);

    printf("Girilen sayilar --> a: %d, b: %d \n", a,b);

    c = a;
    a = b;
    b = c;

    printf("Yer degisimi sonucu --> a: %d, b: %d \n", a,b);
    
    while (getchar() != '\n');
        printf("\nKapatmak icin Enter'a basin.");
    getchar();
    
    return 0;   
}