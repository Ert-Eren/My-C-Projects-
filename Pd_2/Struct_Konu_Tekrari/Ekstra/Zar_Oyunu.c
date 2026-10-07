#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int zar1, zar2;
    int toplam;
    int sonuc = 0;

    srand(time(NULL));
    
    zar1 = (1 + (rand() % 6));
    zar2 = (1 + (rand() % 6));
    toplam = zar1 + zar2;
            
    printf("\nBirinci zar --> %d\n", zar1);
    printf("Ikinci zar --> %d\n", zar2);
    printf("Toplam --> %d\n\n", toplam);

    if (toplam == 7 || toplam == 11){
        printf("Kazandin!");
    }
    else if (toplam == 2 || toplam == 3 || toplam == 12){
        printf("Kaybettin!");
    }
    else if (toplam == 4 || toplam == 5 || toplam == 6 || toplam == 8 || toplam == 9 || toplam == 10){
        printf("Puanin --> %d", toplam);
    }

    return 0;
}