//Bir önceki tersten dizi yazma programının başka bir varyasyonu

#include <stdio.h>

int main() {
    int dizi[10];
    int i;

    // 1. Adım: Kullanıcıdan 10 adet sayı alalım
    printf("Lutfen 10 adet sayi giriniz:\n");
    for (i = 0; i < 10; i++) {
        printf("%d. sayi: ", i + 1);
        scanf("%d", &dizi[i]);
    }

    // 2. Adım: Diziyi tersten ekrana yazdıralım
    printf("\nDizinin tersten yazilmis hali:\n");
    // Döngü 9. indeksten başlar, 0. indekse kadar gider
    for (i = 9; i >= 0; i--) {
        printf("%d", dizi[i]);
        
        // Görsellik için: Son elemandan sonra virgül koyma
        if (i > 0) {
            printf(", ");
        }
    }
    
    printf("\n");
    return 0;
}