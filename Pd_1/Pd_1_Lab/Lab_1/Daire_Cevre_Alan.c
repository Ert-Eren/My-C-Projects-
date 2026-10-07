#include <stdio.h>

int main(){

    const float PI = 3.14;
    float yaricap, alan, cevre;
    int islem;

    printf("\t\t\tDaire Alan ve Cevre Hesaplama\t\t\t\n\n"); //Başlık şeklinde yazdim
    printf("Alan hesabi icin klavyeden 1 tusuna basin.\nCevre hesabi icin 2 tusuna basin.\n\n");
    
    printf("Yaricap degerini girin: ");
    scanf("%f", &yaricap);

    printf("Yapmak istediginiz islemi belirtin: ");
    scanf("%d", &islem);

    if (islem == 2){
        cevre = 2*PI*yaricap;
        printf("Dairenin Cevresi = %.2f\n", cevre);
    }
    else if (islem == 1){
        alan = PI*(yaricap*yaricap);
        printf("Dairenin Alani = %.2f\n", alan);
    }
    else{
        printf("Hatali Giris!\n");
    }
    
    while (getchar() != '\n');
        printf("\nKapatmak icin Enter'a basin.");
    getchar();
    
    return 0;
}