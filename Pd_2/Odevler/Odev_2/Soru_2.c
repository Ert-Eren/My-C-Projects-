//10 elemanli bir dizide dizi elemanlarını toplayarak toplamı geri döndüren rekürsif fonksiyonu yazınız(Döngü kullanılmayacak)

#include <stdio.h>

int diziTopla(int arr[], int boyut);

int main(){

    int dizi[10];
    int boyut = 10;
    printf("10 adet sayi girin: \n");
    
    int i;
    for(i=0; i<10; i++){
        printf("%d. Sayi -> ", i+1);
        scanf("%d", &dizi[i]);
    }

    printf("\nGirilen sayilarin toplami --> %d", diziTopla(dizi, boyut));

    return 0;
}

int diziTopla(int arr[], int boyut){
    
    if (boyut <= 0){
        return 0;
    }

    return arr[boyut - 1] + diziTopla(arr, boyut-1);
}