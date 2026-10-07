#include <stdio.h>

int asalSayi(int n);

int main(){

    int sayi;
    printf("Bir sayi girin: ");
    scanf("%d", &sayi);

    if (asalSayi(sayi)){
        printf("Girilen sayi asal --> %d", sayi);
    }
    else {
        printf("Girilen sayi asal degil --> %d", sayi);
    }


    return 0;
}

int asalSayi(int n){

    if (n <= 1){
        return 0;
    }
    int i;
    for (i=2; i<n; i++){
        if (n % i == 0){
            return 0;
        }
    }
    return 1;
}