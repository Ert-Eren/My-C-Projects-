//Klavyeden girilen sayının 1'den 10'a kadar olan çarpımlarını gösteren program.

#include <stdio.h>

int main(){

    int n;
    
    printf("\t\t\t\tCARPIM TABLOSU\t\t\t\t\n");
    printf("Bir sayi giriniz: ");
    scanf("%d", &n);

    int i;

    for (i=1; i<=10; i++){
        printf("%d x %d = %d\n", n, i, n*i);
    }
    
    while (getchar() != '\n');
        printf("\nKapatmak icin Enter'a basin.");
    getchar();
    

    return 0;
}