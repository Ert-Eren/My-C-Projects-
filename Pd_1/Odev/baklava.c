#include <stdio.h>

int main(){

    int sayi,satir, bosluk, yildiz;
    
    printf("Sayi girin: ");
    scanf("%d", &sayi);
    printf("\n");
    
    for(satir = 1; satir <= sayi; satir++){
        for(bosluk = 1; bosluk <= sayi - satir; bosluk++){
            printf(" ");
        }
        for(yildiz = 1; yildiz <= 2 * satir - 1; yildiz++){
            printf("*");
        }
        printf("\n");
    }
    for(satir = sayi - 1; satir >= 1; satir--){
        for(bosluk = 1; bosluk <= sayi - satir; bosluk++){
            printf(" ");
        }
        for(yildiz = 1; yildiz <= 2 * satir - 1; yildiz++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}