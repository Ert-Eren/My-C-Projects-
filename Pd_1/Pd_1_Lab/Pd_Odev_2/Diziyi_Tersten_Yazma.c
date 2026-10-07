// Klavyeden girilen 10 elemanlı bir dizinin tersten yazılmış halini gösteren program
#include <stdio.h>

int main(){

    int dizi[10];

    printf("10 adet sayi girin: ");
    int i;
    for (i=0; i<10; i++){
        scanf("%d", &dizi[i]);
        printf("%d ", dizi[i]);    
    }
    printf("\nDizinin tersten yazilmis hali: \n");
    for (i=9; i>=0; i--){
        printf("%d ", dizi[i]);
    }
    
    return 0;

}