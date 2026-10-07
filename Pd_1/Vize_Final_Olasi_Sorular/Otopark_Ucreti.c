//Otoparkta geçirilen süre ile ücretlendirme hesabı

#include <stdio.h>

int main(){

    int saat;

    printf("\nOtoparkta gecirilen sureyi girin: ");
    scanf("%d", &saat);

    switch(saat){
        case 1:
        case 2:
        case 3:
        case 4:
            printf("\nOdenecek Tutar: 100\n");
            break;
        case 5:
        case 6:
        case 7:
        case 8:
            printf("\nOdenecek Tutar: 120\n");
            break;
        case 9:
        case 10:
        case 11:
        case 12:
            printf("\nOdenecek Tutar: 150\n");
            break;
        default:
            printf("\nOdenecek Tutar: 200\n");
    }
    
    return 0;
}