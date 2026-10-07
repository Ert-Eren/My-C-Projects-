#include <stdio.h>

int main(){

    int sayac = 0;
    int i;

    for(i=1; i<=10; i++){
        sayac = sayac + i;
    }
    printf("sayac = %d\n", sayac);

    while (getchar() != '\n');
        printf("\nKapatmak icin Enter'a basin.");
    getchar();
    
    return 0;
}