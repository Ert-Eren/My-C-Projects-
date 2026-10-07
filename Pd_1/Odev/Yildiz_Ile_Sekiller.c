// Satır ve sütun değerleri girilerek kare veya dikdörtgen çizen program.
#include <stdio.h>

int main() {
    int sutun, satir;
    scanf("%d", &sutun);
    scanf("%d", &satir);
    
    int i,j;
    for(i=0; i<sutun; i++){
        for(j=0; j<satir; j++){
            printf("*");
        }
        printf("\n");
    }   
    
    while (getchar() != '\n');
        printf("\nKapatmak icin Enter'a basin.");
    getchar();
    return 0;
}