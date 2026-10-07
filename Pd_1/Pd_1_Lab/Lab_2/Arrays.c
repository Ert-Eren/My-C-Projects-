#include <stdio.h>

int main(){

    int sayilar[] = {10,20,30,40,50};
    int i;
    
    for (i=0; i<5; i++) {
        printf("%d. eleman %d\n", i,sayilar[i]);
    }

    return 0;
}