// Bagaj Hesaplama

#include <stdio.h>

int main() {
    
    int bagaj,bagaj_siniri,el_bagaj,el_bagaj_siniri,extra_yuk_fiyati;
    
    bagaj_siniri = 15;
    el_bagaj_siniri = 8;
    extra_yuk_fiyati = 5;
    

    printf("*15 Kg ve ustu bagajlarda ve 8 kg ustu el bagajlarinda extra fiyat uygulanacaktir. (Kg basi 5 TL)*\n\n");
    printf("*Extra fiyat hesaplamak icin istenilen bilgileri eksiksiz bir sekilde doldurunuz.*\n\n");


    printf("Kg cinsinden bagaj yukunu giriniz: ");
    scanf("%d", &bagaj);
    printf("Bagajiniz: %d Kg\n",bagaj);

    printf("Kg cinsinden el bagaj yukunu giriniz: ");
    scanf("%d", &el_bagaj);
    printf("El Bagajiniz: %d Kg\n",el_bagaj);

    if (bagaj <= 15) {
        
        printf("Bagaj icin extra ucret odenmeyecektir.\n");
       
    }
    else {
        printf("Bagajda asilan yuk miktari: %d Kg\n", bagaj - bagaj_siniri);
    }
    if (el_bagaj <= 8) {
        
        printf("El bagaji icin extra ucret odenmeyecektir.\n");
    }
    else {
        printf("El bagajinda asilan yuk miktari: %d Kg\n", el_bagaj - el_bagaj_siniri);
    }
    
    printf("Extra odenecek tutar: %d TL\n", ((bagaj - bagaj_siniri) + (el_bagaj - el_bagaj_siniri))*extra_yuk_fiyati);
    printf("Iyi Yolculuklar");

    while (getchar() != '\n');
        printf("\nKapatmak icin Enter'a basin.");
    getchar();
    
    return 0;
}