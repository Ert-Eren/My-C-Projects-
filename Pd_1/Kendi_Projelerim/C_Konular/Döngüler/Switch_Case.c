// switch case ile notların harf karşılığını bulma

#include <stdio.h>

int main(){

    int not;
    printf("Notunuzu giriniz: ");
    scanf("%d", &not);

    switch (not / 10){
        case 10:
        case 9:
            printf("A ile gectiniz.");
            break;
        case 8:
            printf("B ile gectiniz.");
            break;
        case 7:
            printf("C ile gectiniz.");
            break;
        case 6:
            printf("D ile gectiniz.");
            break;
        default:
            printf("F ile kaldiniz.");    

    }

    while (getchar() != '\n');
        printf("\nKapatmak icin Enter'a basin.");
    getchar();
    
    return 0;
}