//Klavyeden girilen sayının basamaklarını ayıran program
#include <stdio.h>

int main() {
    int sayi, yedekSayi;
    int basamaklar[5]; // En fazla 5 basamak için dizi
    int i = 0;

    printf("Maksimum 5 basamakli bir sayi giriniz: ");
    scanf("%d", &sayi);

    // Sayının negatif olma durumuna karşı mutlak değer alalım
    if (sayi < 0) {
        sayi = -sayi;
    }

    yedekSayi = sayi;

    // Basamakları diziye ayırma döngüsü
    // Sayı 0 olana kadar veya 5 basamağa ulaşana kadar devam eder
    while (yedekSayi > 0 && i < 5) {
        basamaklar[i] = yedekSayi % 10; // Son basamağı bul ve diziye at
        yedekSayi = yedekSayi / 10;     // Sayıyı bir basamak küçült
        i++;
    }

    // i değişkeni şu an dizideki toplam rakam sayısını tutuyor.
    printf("Sayinin basamaklari: ");
    
    // Diziye sondan başa (birler basamağından yukarı) eklendiği için
    // Ekrana basarken döngüyü sondan başa doğru kuruyoruz.
    for (int j = i - 1; j >= 0; j--) {
        printf("%d ", basamaklar[j]);
    }

    printf("\n");
    
    return 0;
}