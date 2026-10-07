#include <stdio.h>


int main(){

    int i;
    for (i=1; i<=20; i++){
        if(i==16){
            break; //break, belirtilen sayiya gelindiğinde döngüyü durdurur.
        }
        printf("%d ", i);
    }

    while (getchar() != '\n');
        printf("\nKapatmak icin Enter'a basin.");
    getchar();
    
    return 0;
}