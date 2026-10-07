#include <stdio.h>

void tekCift(int sayi);

int main(){

    int sayi;
    printf("Bir sayi girin: ");
    scanf("%d", &sayi);

    tekCift(sayi);

    return 0;
}

void tekCift(int sayi){
    if (sayi % 2 == 0){
        printf("Girilen sayi cift.");
    }
    else{
        printf("Girilen sayi tek.");
    }
}