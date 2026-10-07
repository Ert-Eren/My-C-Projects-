#include <stdio.h>

int kareAl(int a){
    int sonuc;
    sonuc = a*a;
    return sonuc;
}

int main(){

    int sayi;
    printf("Karesini almak istediginiz sayiyi girin: ");
    scanf("%d", &sayi);
    printf("Sonuc = %d", kareAl(sayi));
    
    return 0;
}