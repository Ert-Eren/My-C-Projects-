// for döngüsü

#include <stdio.h>

int main(){

    int n;
    printf("Sayi giriniz: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        printf("%d ", i);
    }

    while (getchar() != '\n');
        printf("\nKapatmak icin Enter'a basin.");
    getchar();
    
    return 0;
}