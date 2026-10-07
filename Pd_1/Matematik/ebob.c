#include <stdio.h>

int ebobAl(int sayi1, int sayi);

int main(){

    int sayi1, sayi2;

    printf("\nEBOB'unu almak istediginiz sayilari girin: ");
    scanf("%d %d", &sayi1,&sayi2);

    printf("\nGirilen sayilarin EBOB'u --> %d\n", ebobAl(sayi1, sayi2)); 
    return 0;
}

int ebobAl(int sayi1, int sayi2){
    int gecici;

    while (sayi2 != 0) {
        gecici = sayi2;
        sayi2 = sayi1 % sayi2; 
        sayi1 = gecici;
    }

    return sayi1;
}