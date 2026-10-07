#include <stdio.h>
#include <string.h>

int main(){

    char sifre1[10];
    char sifre2[10];

    printf("\nSifrenizi girin: ");
    scanf("%s", sifre1);
    printf("Sifreyi onaylayin: ");
    scanf("%s", sifre2);

    int result = strcmp(sifre1,sifre2);

    if(result == 0){
        printf("Basarili!\n");
    }
    else{
        printf("Girilen sifreler eslesmiyor!\n");
    }

    return 0;
}