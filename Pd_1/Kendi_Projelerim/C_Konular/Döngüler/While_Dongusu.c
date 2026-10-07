// while döngüsü

#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    int sayi = 2;

    while (sayi <= n){
        printf("%d ", sayi);
        sayi += 2;
    }

    while (getchar() != '\n');
        printf("\nKapatmak icin Enter'a basin.");
    getchar();
    
    return 0;
}