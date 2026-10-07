#include <stdio.h>

int main(){

    int i, n;
    int faktoriyel = 1;
    
    printf("sayi giriniz: ");
    scanf("%d", &n);
    
    for(i=1; i<=n; i++){
        
        faktoriyel = faktoriyel * i;
    }
    printf("girilen sayinin faktoriyeli = %d", faktoriyel);
    
    while (getchar() != '\n');
        printf("\nKapatmak icin Enter'a basin.");
    getchar();
    
    return 0;
}