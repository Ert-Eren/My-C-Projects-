#include <stdio.h>

void diziyiTersCevir(int *baslangic, int *bitis){

    if (baslangic >= bitis) {
        return;
    }

    int temp = *baslangic;
    *baslangic = *bitis;
    *bitis = temp;

    diziyiTersCevir(baslangic + 1, bitis - 1);
}

int main(){
    int dizi[] = {10, 20, 30, 40, 50, 60, 70};
    int boyut = sizeof(dizi) / sizeof(dizi[0]);

    printf("\nOrijinal Dizi: ");
    for (int i = 0; i < boyut; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");

    diziyiTersCevir(dizi, dizi + boyut - 1);

    printf("Ters Cevrilmis Dizi: ");
    for (int i = 0; i < boyut; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");

    
    return 0;
}