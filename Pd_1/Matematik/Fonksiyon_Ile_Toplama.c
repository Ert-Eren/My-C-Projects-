#include <stdio.h>

int toplama(int a, int b){
    return a + b;
}

int main(){

    int a,b;
    printf("Toplamak istediginiz iki adet sayiyi girin: ");
    scanf("%d %d", &a,&b);

    int sonuc = toplama(a,b);

    printf("\nSonuc = %d", sonuc);

    while(getchar() != '\n');
        printf("\n\nKapatmak icin Enter'a basin.");
    getchar();

    return 0;
}