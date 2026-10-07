//Girilen sayıların karesini alıp ekrana yazdıran program
#include <stdio.h>

int main(){

    int dizi[10];
    int us;
    printf("\tKlavyeden -1 girilene kadar yazilan sayilarin karesini alir.\t\n");
    printf("Karesini hesaplamak istediginiz sayilari girin (max 10 adet): ");
    int i;
    
   for(i=0; i<10; i++){
        scanf("%d", &dizi[i]);
        us = dizi[i]*dizi[i];
        printf("\t%d^2= %d\n ",dizi[i],us);

        if (dizi[i] == -1){
            break;
        }
    }
    
    while (getchar() != '\n');
        printf("\nKapatmak icin Enter'a basin.");
    getchar();
    
    return 0;
}