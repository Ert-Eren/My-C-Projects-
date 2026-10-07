#include <stdio.h>

void swap(int *a, int *b);

int main(){

    int a,b;
    
    printf("\nIlk sayiyi gir: ");
    scanf("%d", &a);

    printf("Ikinci sayiyi gir: ");
    scanf("%d", &b);

    printf("=====================\n=====================\n");
    printf("Sayilarin yer degistirmeden onceki hali: \n");
    printf("a-> %d  b-> %d\n",a,b);

    swap(&a,&b);

    printf("=====================\n=====================\n");
    printf("Sayilarin yer degistirdikten sonraki hali: \n");
    printf("a-> %d  b-> %d\n",a,b);

    return 0;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}