#include <stdio.h>

int topla(int, int);
int cikar(int , int);
int carp(int, int);
float bol(int , int);

int main(){

    int islem, s1, s2;

    printf("\n\tYapmak istediginiz islemi secin\n");
    printf("1-Toplama\n2-Cikarma\n3-Carpma\n4-Bolme\n\n");
    printf("İslem: ");
    scanf("%d", &islem);

    printf("2 adet sayi girin: ");
    scanf("%d %d", &s1, &s2);

    printf("\n");

    if (islem == 1){
        printf("Sonuc = %d", topla(s1,s2));
    }
    else if (islem == 2){
        printf("Sonuc = %d", cikar(s1,s2));
    }
    else if (islem == 3){
        printf("Sonuc = %d", carp(s1,s2));
    }
    else if (islem == 4){
        printf("Sonuc = %.2f", bol(s1,s2));
    }
    else {
        printf("Gecersiz İslem!");
    }
    printf("\n");


    return 0;
}

int topla(int a, int b){
    return a + b;
}
int cikar(int a, int b){
    return a - b;
}
int carp(int a, int b){
    return a * b;
}
float bol(int a, int b){
    return (float) a / b;
}