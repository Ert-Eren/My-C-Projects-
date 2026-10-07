#include <stdio.h>

void dikDortgen(int yukseklik, int genislik);

int main(){

    int yukseklik, genislik;

    printf("\nYukseklik: ");
    scanf("%d", &yukseklik);
    printf("Genislik: ");
    scanf("%d", &genislik);

    dikDortgen(yukseklik,genislik);

    return 0;
}

void dikDortgen(int yukseklik, int genislik){
    int i,j;
    for(i=1; i<=yukseklik; i++){
        printf("\n");
        for(j=1; j<=genislik; j++){
            printf("*");
        }
    }
    printf("\n");
}