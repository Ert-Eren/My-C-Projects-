#include <stdio.h>

int main(){

    int sayi1, sayi2;
    char islem;
    float sonuc;

    printf("Yapmak istediginiz islemi giriniz: ");
    scanf("%d %c %d", &sayi1,&islem,&sayi2);

    if (islem == '+'){
        sonuc = sayi1 + sayi2;
        printf("Sonuc = %.2f", sonuc);
    
    }else if (islem == '-'){
        sonuc = sayi1 - sayi2;
        printf("Sonuc = %.2f", sonuc);
    
    }else if (islem == '/'){
        sonuc = sayi1 / sayi2;
        printf("Sonuc = %.2f", sonuc);
    
    }else if (islem == '*'){
        sonuc = sayi1 * sayi2;
        printf("Sonuc = %.2f", sonuc);
    
    }else{
        printf("Gecersiz islem!");
    } 

    while (getchar() != '\n');
        printf("\nKapatmak icin Enter'a basin.");
    getchar();
    
    return 0;
}
