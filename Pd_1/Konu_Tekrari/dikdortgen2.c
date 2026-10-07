#include <stdio.h>

int main() {
    int genislik, yukseklik, i, j;

    printf("Genislik degerini girin: ");
    scanf("%d", &genislik);
    printf("Yukseklik degerini girin: ");
    scanf("%d", &yukseklik);

    for (i = 1; i <= yukseklik; i++) {
        for (j = 1; j <= genislik; j++) {
            
            if (i == 1 || i == yukseklik || j == 1 || j == genislik) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}