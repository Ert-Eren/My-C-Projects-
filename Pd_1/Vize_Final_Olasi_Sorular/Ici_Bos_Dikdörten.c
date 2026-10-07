#include <stdio.h>

void dikDortgen(int genislik, int yukseklik);

int main(){

    int genislik, yukseklik;

    printf("\nGenislik: ");
    scanf("%d", &genislik);

    printf("Yukseklik: ");
    scanf("%d", &yukseklik);

    dikDortgen(genislik,yukseklik);

    return 0;

}

void dikDortgen(int genislik, int yukseklik){
    int i,j;

    for(i=1; i<=yukseklik; i++){
        printf("\n");
        for(j=1; j<=genislik; j++){
            if (i == 1 || i == yukseklik || j == 1 || j == genislik){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
    }
    printf("\n");
}