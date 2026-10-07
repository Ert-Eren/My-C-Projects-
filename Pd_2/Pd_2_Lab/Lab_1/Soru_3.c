#include <stdio.h>

int diziOrt(int dizi[], int boyut);

int main(){

    int dizi[10];

    printf("\n10 elemanli dizi girin: \n\n");
    
    for(int i=0; i<10; i++){
        printf("%d. sayi --> ", i+1);
        scanf("%d", &dizi[i]);
    }

    return 0;
}

int diziOrt(int dizi[], int boyut){
    
}