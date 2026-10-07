#include <stdio.h>

int main(){

    int satir,sutun;
    
    printf("Satir: ");
    scanf("%d", &satir);
    printf("Sutun: ");
    scanf("%d", &sutun);

    int dizi[satir][sutun];
    int i,j;

    for(i=0; i<satir; i++){
        for(j=0; j<sutun; j++){
            printf("\n[%d][%d] --->",i+1,j+1);
            scanf("%d", &dizi[i][j]);
        }
    }
    printf("\n");
    
    int k,n;

    for(k=0; k<satir; k++){
        for(n=0; n<sutun; n++){
            printf(" %d ",dizi[k][n]);
        }
        printf("\n");
    }

    
    return 0;
}