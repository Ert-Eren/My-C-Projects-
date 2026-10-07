#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Ogrenci{
    int no;
    char isim[20];
}ogrenci;

int main(){

    ogrenci o1 = {0, ""};
    FILE* dosya;
    dosya = fopen("RastgeleErisimOgrenci.txt", "w");

    if (dosya == NULL){
        printf("\nDosya Olusturulamadi!\n\n");
        return 1;
    }
    else{
        for(int i=0; i<100; i++){
            fwrite(&o1, sizeof(ogrenci),1,dosya);   
        }
        printf("\nDosya Olusturma Basarili!\n\n");
        fclose(dosya);
    }
    
    dosya = fopen("RastgeleErisimOgrenci.txt", "r+");
    
    if(dosya == NULL){
        printf("\nDosya Olusturulamadi!\n\n");
        return 1;
    }
    else{
        printf("Cikmak icin 0' a basin\n");
        printf("Ogrenci numarasi girin (1-100): ");
        scanf("%d", &o1.no);

        while(o1.no != 0){
            printf("Adi girin: ");
            scanf("%s", o1.isim);
            
            fseek(dosya, (o1.no -1)*sizeof(ogrenci), SEEK_SET);

            fwrite(&o1, sizeof(ogrenci), 1, dosya);

            printf("Ogrenci numarasi girin (1-100): ");
            scanf("%d", &o1.no);
        }
        printf("\nDosyaya yazma islemi tamamlandi!\n\n");
        fclose(dosya);
    }
    return 0;
}