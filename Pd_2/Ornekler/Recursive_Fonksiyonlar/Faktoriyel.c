#include <stdio.h>

int factorial(int sayi);

int main(){

    int sayi;
    
    printf("\nFaktoriyel almak istediginiz sayiyi girin: ");
    scanf("%d", &sayi);

    printf("\n%d! --> %d\n", sayi, factorial(sayi));

    return 0;
}

int factorial(int sayi){

    if(sayi == 0){
        return 1;
    }
    else{
        return sayi * factorial(sayi-1);
    }
}

/* 5! = 5*4! oldugu icin factorial(5) = 5 * factorial(4) 
yani factorial(n) = n * factorial(n-1)   */