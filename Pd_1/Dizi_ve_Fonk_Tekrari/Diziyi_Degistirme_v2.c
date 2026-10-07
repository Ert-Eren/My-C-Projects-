#include <stdio.h>

void diziyiDegistir(int arr[], int boyut);

int main(){

    int boyut;

    printf("Gireceginiz sayi adedini girin: ");
    scanf("%d", &boyut);

    int dizi[boyut];

    printf("\nSayilari girin: \n");
    
    int i;
    for(i=0; i<boyut; i++){
        printf("%d. Sayi -> ", i+1);
        scanf("%d", &dizi[i]);
    }

    diziyiDegistir(dizi,boyut);

    printf("\nSayilarin 2 ile carpilmis hali: \n");
    
    int j;
    for(j=0; j<boyut; j++){
        printf("%d. Sayi -> %d\n", j+1, dizi[j]);
    }

    return 0;
}

void diziyiDegistir(int arr[], int boyut){
    int i;
    for(i=0; i<boyut; i++){
        arr[i] = arr[i] * 2;
    }
}