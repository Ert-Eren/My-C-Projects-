#include <stdio.h>

int main(){

    int i, arr[10];

    printf("\n10 adet sayi girin: \n\n");
    for(i=0; i<10; i++){
        printf("%d. sayi: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("\n");

    printf("Girilen sayilarin ters hali: \n\n");
    for(i=9; i>=0; i--){
        printf("%d. sayi: %d\n", i+1, arr[i]);

    }

    return 0;
}