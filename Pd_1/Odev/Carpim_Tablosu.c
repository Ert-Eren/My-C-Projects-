//1'den 10'a kadar olan sayıların çarpım tablosu

#include <stdio.h>

int main(){

    
    printf("\t\t\t\tCARPIM TABLOSU\t\t\t\t\n");

    int i,k;
    for(k=1; k<=10; k++){
        printf("\n");
        for (i=1; i<=10; i++){   
            printf("%d x %d = %d\n", k, i, k*i);
        }
    }

    return 0;
}