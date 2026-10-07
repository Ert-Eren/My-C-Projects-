//Klavyeden girilen sayının faktoriyelini bulan program

#include <stdio.h>

int main(){

    int i,sayi;
    int faktoriyel = 1;

    printf("Faktoriyelini bulmak istediginiz sayiyi girin: ");
    scanf("%d", &sayi);

    for (i=1; i<=sayi; i++){
        faktoriyel = faktoriyel*i;
    }

    printf("%d! = %d", sayi,faktoriyel);
    
    return 0;
}