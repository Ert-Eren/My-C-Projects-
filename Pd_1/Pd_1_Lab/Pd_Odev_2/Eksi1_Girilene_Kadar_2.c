//Girilen sayıların karesini alıp ekrana yazdıran program 2. varyasyon
#include <stdio.h>

int main(){

    int dizi[10];
    int us, i;

    printf("Karesini almak istediginiz sayilari girin: \n");
    
    for(i=0; i<10; i++){
        printf("%d. Sayi: ", i+1);
        scanf("%d", &dizi[i]);
        
        if (dizi[i] == -1){
            break;
        }
    }
    printf("Girilen sayilarin kareleri: \n\n");
    for(i=0; i<10; i++){
        us = dizi[i] * dizi[i];
        printf("%d^2 = %d\n", dizi[i],us);
        
        if (dizi[i] == -1){
            break;
        }

    }


    return 0;
}