#include <stdio.h>

int main(){
    
    int islem;
    float bakiye = 1000.00;
    float para;

    while(1){
        printf("\nYapmak istediginiz islemi secin\n\n");
        printf("1-Bakiyeyi Goster\n2-Para Yatır\n3-Para Cek\n4-Cikis\n");
        scanf("%d", &islem);
    
    
        switch(islem){
            case 1:
                
                printf("\nBakiyeniz = %2.f\n", bakiye);
                break;
            
            case 2:
                
                printf("Yatırmak istediginiz tutar: ");
                scanf("%f", &para);
                bakiye += para;
                break;
            
            case 3:

                printf("Cekmek istediginiz tutar: ");
                scanf("%f", &para);
                    
                if (para > bakiye){
                    printf("\nBakiye yetersiz\n");
                }
                else{
                    bakiye -= para;
                }

                break;

            case 4:
                
                printf("Cikis yapiliyor...");
                return 0;
            
            default:
                
                printf("Gecersiz islem!");
        }
    }
    return 0;
}