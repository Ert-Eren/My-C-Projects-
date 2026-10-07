//do while döngüsü

#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    int sayi = 2;

    do{
        printf("%d ", sayi);
        sayi += 2;
    }while (sayi <= n);
    
    
    return 0;
}