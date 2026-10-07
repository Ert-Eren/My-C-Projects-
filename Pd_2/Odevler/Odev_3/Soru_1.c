//Kullanıcıdan alınan bir tam sayının basamakları toplamını rekürsif olarak hesaplayan programı yazınız.

#include <stdio.h>

int basamakTopla(int sayi);

int main(){

    int sayi;
    printf("Bir adet sayi girin -> ");
    scanf("%d", &sayi);

    printf("\nGirilen sayinin basamaklari toplami --> %d", basamakTopla(sayi));
    
    return 0;
}

int basamakTopla(int sayi){
    if (sayi == 0){
        return 0;
    }

    return (sayi % 10) + basamakTopla(sayi / 10);
}