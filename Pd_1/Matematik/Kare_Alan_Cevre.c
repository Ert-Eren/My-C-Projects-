//Kare Alan ve Çevre Hesaplama

#include <stdio.h>

int main(){

    int sayi, kenar;
    
    printf("Karenin alanini hesaplamak icin 1 e, cevresini hesaplamak icin 2 ye basin: ");
    scanf("%d", &sayi);

    printf("Kenar uzunlugunu giriniz: ");
    scanf("%d", &kenar);
    
    float cevre = (4*kenar);
    float alan = (kenar*kenar);

    if (sayi == 1){
        printf("Alan = %f", alan);
    }
    else if (sayi == 2){
        printf("Cevre = %f", cevre);
    }
    else{
        printf("Yanlis islem girdiniz.");
    }

    while (getchar() != '\n');
        printf("\nKapatmak icin Enter'a basin.");
    getchar();
    
    return 0;
}