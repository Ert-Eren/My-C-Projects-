#include <stdio.h>

int main(){

    int sayi, i;
    int toplam = 0;

    printf("Sayi girin: ");
    scanf("%d", &sayi);

    for(i=1; i<sayi; i++){
        if (sayi % i == 0){
            toplam += i;
        }
    }

    if (toplam == sayi){
        printf("\nGirilen sayi mukemmel sayidir.");
    }
    else{
        printf("\nGirilen sayi mukemmel sayi degildir.");
    }

    return 0;
}