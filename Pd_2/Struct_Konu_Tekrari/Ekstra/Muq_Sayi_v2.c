#include <stdio.h>

int muqSayi(int sayi);

int main(){

    int sayi;

    printf("Sayi girin: ");
    scanf("%d", &sayi);

    muqSayi(sayi);

    if (1){
        printf("\nGirilen sayi mukemmel sayidir.");
    }
    else{
        printf("\nGirilen sayi mukemmel sayi degildir.");
    }

    return 0;
}

int muqSayi(int sayi){
    int i;
    int toplam = 0;
    for(i=1; i<sayi; i++){
        if (sayi % i == 0){
            toplam += i;
        }
    }

    if (toplam == sayi){
        return 1;
    }
    else{
        return 0;
    }
}