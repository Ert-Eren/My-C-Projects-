#include <stdio.h>

void sekilCiz(int secim, int boyut);

int main(){

    int secim, boyut;
    
    printf("-----Sekil Sihirbazi-----\n\n");
    
    while(1){
        printf("1. Kare Ciz\n2. Dik Ucgen Ciz\n3. Duz Cizgi Ciz\n4. Cikis\n");
        scanf("%d", &secim);
        
        if (secim == 4){
            printf("\nCikis yapiliyor...\n");
            break;
        }

        printf("\nSayi girin (1-10): ");
        scanf("%d", &boyut);

        
        sekilCiz(secim,boyut);

    }
    
    
    return 0;
}

void sekilCiz(int secim, int boyut){
    int i,j;
    switch(secim){
        
        case 1:

            printf("\n");
            for(i=1; i<=boyut; i++){
                for(j=1; j<=boyut; j++){
                    printf("*");
                }
                printf("\n");
            }
            printf("\n");
            break;
        
        case 2:

            printf("\n");
            for(i=1; i<=boyut; i++){
                for(j=1; j<=i; j++){
                    printf("*");
                }
                printf("\n");
            }
            printf("\n");
            break;
        
        case 3:

            printf("\n");
            for(i=1; i<=boyut; i++){
                printf("*");
            }
            printf("\n\n");
            break;
        
        default:
            printf("\nGecersiz Islem!\n\n");
    }
}