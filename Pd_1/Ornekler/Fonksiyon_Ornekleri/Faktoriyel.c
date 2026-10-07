#include <stdio.h>

int faktoriyelHesap(int n);

int main(){

    int n;
    printf("Faktoriyelini hesaplamak istediginiz sayiyi girin: ");
    scanf("%d", &n);

    printf("%d! --> %d", n,faktoriyelHesap(n));

    return 0;
}

int faktoriyelHesap(int n){
    int i;
    int faktoriyel = 1;
    for(i=1; i<=n; i++){
        faktoriyel = faktoriyel * i;
    }
    return faktoriyel;
}