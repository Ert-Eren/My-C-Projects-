#include <stdio.h>

int main(){

    printf("Hello C!");
    
    while (getchar() != '\n');
        printf("\nKapatmak icin Enter'a basin.");
    getchar();

    return 0;
}