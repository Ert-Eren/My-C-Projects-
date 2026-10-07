//Klavyeden girilen bir metnin içerisindeki her harfin tekrar sayısını bularak ekrana yazdıran program

#include <stdio.h>
#include <stdlib.h>

int main(){

    char metin[500];
    int sayac[256] = {0};

    printf("Metin girin: ");
    fgets(metin, sizeof(metin), stdin);

    for(int i=0; metin[i] != '\0'; i++){
        if(metin[i] != '\n'){
            sayac[(unsigned char)metin[i]]++;
        }    
    }

    printf("\nMetindeki Harflerin Adedi: \n\n");
   
    for(int i=0; i<256; i++){
        if (sayac[i] > 0){
            printf("'%c' karakteri: %d kez\n", i, sayac[i]);
        }
    }
    
    return 0;
}