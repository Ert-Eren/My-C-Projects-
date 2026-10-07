#include <stdio.h>

int main(){

    int dizi[3][5] = {10,20,30,40,50,60,70,80,90,100,110,120,130,140,150};
    int i,j; /* i = dizideki satırlar 
                j = dizideki sütunlar */
    
    for(i=0; i<3; i++){
        for(j=0; j<5; j++){
            printf("%d ", dizi[i][j]);
        }
        printf("\n");
    }

    while(getchar() != '\n');
        printf("Kapatmak icin Enter'a basin.");
    getchar();
    return 0;
}