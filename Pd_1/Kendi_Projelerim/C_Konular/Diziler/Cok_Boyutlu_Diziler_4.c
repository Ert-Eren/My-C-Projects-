//Klavyeden girilen 2 farklı dizinin elemanlarını gösteren program
#include <stdio.h>

int main(){

    int satir1,sutun1,satir2,sutun2;

    printf("1. dizinin satir ve sutun sayisi: ");
    scanf("%d %d", &satir1, &sutun1);

    printf("2. dizinin satir ve sutun sayisi: ");
    scanf("%d %d", &satir2, &sutun2);

    int dizi1[satir1][sutun1];
    int dizi2[satir2][sutun2];
    
    int i,j;
   
    printf("\n\tDizi1\n\n");
   
    for(i=0; i<satir1; i++){
        for(j=0; j<sutun1; j++){
            printf("[%d][%d]---> ", i+1,j+1);
            scanf("%d", &dizi1[i][j]);
        }
        
    }
    
    printf("\n1. dizinin elemanlari:\n");

    for(i=0; i<satir1; i++){
        for(j=0; j<sutun1; j++){
            printf(" %d ", dizi1[i][j]);
        }
        printf("\n");
        
    }

    int k,l;
   
    printf("\n\tDizi2\n\n");
   
    for(k=0; k<satir2; k++){
        for(l=0; l<sutun2; l++){
            printf("[%d][%d]---> ", k+1,l+1);
            scanf("%d", &dizi2[k][l]);
        }
        
    }
    
    printf("\n2. dizinin elemanlari:\n");

    for(k=0; k<satir2; k++){
        for(l=0; l<sutun2; l++){
            printf(" %d ", dizi2[k][l]);
        }
        printf("\n");
        
    }

    while(getchar() != '\n');
        printf("\nKapatmak icin Enter'a basin.");
    getchar();
    
    return 0;
}