//Klavyeden girilen sayının tam bölenlerini bulan program

#include <stdio.h>

int main(){

    int sayi,i;

    printf("Sayiyi girin: ");
    scanf("%d", &sayi);

    printf("Sayinin tam bolenleri:\n");

    for(i=1; i<=sayi; i++){
        if(sayi % i == 0){
            printf("%d\n", i);
        }
    }

    return 0;
}