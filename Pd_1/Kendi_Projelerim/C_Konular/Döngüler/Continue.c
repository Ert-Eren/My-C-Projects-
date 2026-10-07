#include <stdio.h>

int main(){

    int i;
    for(i=1; i<=20; i++){
        if (i % 2 != 0){
            continue; //continue, belirtilen islem gerçekleştiğinde döngüyü atlayıp devam ettirir.
        }
        printf("%d ", i);
    }

    while (getchar() != '\n');
        printf("\nKapatmak icin Enter'a basin.");
    getchar();
    
    return 0;
}