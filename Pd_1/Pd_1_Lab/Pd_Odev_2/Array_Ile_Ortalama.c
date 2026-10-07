#include <stdio.h>

int main(){

    float sayilar[8];
    float ortalama, toplam = 0.0;
    
    printf("8 adet sayi girin: \n");

    int i;
    for(i=0; i<8; i++){
        printf("%d. Sayi: ", i+1);
        scanf("%f", &sayilar[i]);
        toplam += sayilar[i];
    }
    
    ortalama = toplam  /8.0;
    printf("\nSayilarin Ortalamasi: %.2f", ortalama);
    
    return 0;
}