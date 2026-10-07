#include <stdio.h>

int main(){

    int no, sonuc;
    float vize, final;

    printf("Ogrenci numaranizi giriniz: ");
    scanf("%d", &no);

    printf("Vize notunuzu giriniz: ");
    scanf("%f", &vize);

    printf("Final notunuzu giriniz: ");
    scanf("%f", &final);

    sonuc = (vize*0.4) + (final*0.6);
    
    printf("Ogrenci no: %d\n", no);
    printf("Sinav sonucunuz: %d\n", sonuc);
          
    while (getchar() != '\n');
        printf("\nKapatmak icin Enter'a basin.");
    getchar();
    
    return 0;
}