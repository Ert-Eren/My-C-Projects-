#include <stdio.h>

int main(){

    int i;
    for(i = 1; i<=10; i++){

        printf("%d-Hello C! \n", i); 
    }

    while (getchar() != '\n');
        printf("\nKapatmak icin Enter'a basin.");
    getchar();
    
    return 0;
}
