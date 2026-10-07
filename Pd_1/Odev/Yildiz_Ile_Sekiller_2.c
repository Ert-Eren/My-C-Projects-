//Yıldızlarla dik üçgen çizen program
#include <stdio.h>

int main(){

    int i,j;
    for(i=1; i<=5; i++){
        for(j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    
    while (getchar() != '\n');
        printf("\nKapatmak icin Enter'a basin.");
    getchar();
    return 0;
}