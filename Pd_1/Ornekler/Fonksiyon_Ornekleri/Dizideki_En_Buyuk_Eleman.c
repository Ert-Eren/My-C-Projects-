#include <stdio.h>

int enBuyuk(int dizi[], int boyut);

int main(){
    
    int i,n;
    int dizi[n];

    printf("\nDizide olacak eleman sayisini girin: ");
    scanf("%d", &n);

    if (n == 0){
        return 0;
    }
    if (n < 0){
        printf("\nGecersiz islem!\n");
        return 0;
    }

    printf("\n%d adet sayi girin: \n\n", n);

    for(i=0; i<n; i++){
        printf("%d. Sayi -> ", i+1);
        scanf("%d", &dizi[i]);
    }
    
    printf("\nDizideki en buyuk eleman --> %d\n", enBuyuk(dizi,n));
    
    return 0;
}

int enBuyuk(int dizi[], int boyut){
    int buyuk = dizi[0];
    int i;
    for(i=1; i<boyut; i++){
        if (dizi[i] > dizi[0]){
            buyuk = dizi[i];
        }
    }
    return buyuk;
}