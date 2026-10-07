//Vize final ile not hesaplama

#include <stdio.h>

int main() {

    int vize, final;
    

    printf("Vize notunuzu giriniz: ");
    scanf("%d", &vize);

    printf("Final notunuzu giriniz: ");
    scanf("%d", &final);

    float ortalama = vize*0.4 + final*0.6;

    if (ortalama >= 60) { 
      printf("Ortalama ile gectiniz: %.2f", ortalama);
   }
    else {
      printf("Ortalama ile kaldiniz: %.2f", ortalama);
   }

   while (getchar() != '\n');
        printf("\nKapatmak icin Enter'a basin.");
    getchar();
    
    return 0;
}