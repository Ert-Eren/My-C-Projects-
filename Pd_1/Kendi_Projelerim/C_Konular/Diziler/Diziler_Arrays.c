#include <stdio.h>

int main(){

    int sayilar[] = {10,20,30,40,50};
    //Burada 2 yerine sırayla istedigimiz sayilari girebiliriz (1,2,3,4,5)
    printf("Sayi: %d", sayilar[2]);

    while (getchar() != '\n');
        printf("\nKapatmak icin Enter'a basin.");
    getchar();
    
    return 0;
}