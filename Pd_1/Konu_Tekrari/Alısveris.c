#include <stdio.h>

int main(){

    int islem;
    int bakiye = 0;
    int para;
    int ekmek = 0;
    int sut = 0;
    int cikolata = 0;

    printf("\n\tAlısveris Merkezimize Hosgeldiniz.\n");

    while(1){
        printf("\nYapmak istediginiz islemi secin.\n\n");
        printf("1- Ekmek (10 TL)\n2- Süt (30 TL)\n3- Cikolata (20 TL)\n4- Sepeti Gor\n5- Alısverisi Bitir\n");
        scanf("%d", &islem);

        switch(islem){
            
            case 1:
                
                bakiye += 10;
                ekmek++;
                printf("\nEkmek eklendi.\n");
                printf("Ara toplam --> %d TL\n", bakiye);
                break;
            
            case 2:

                bakiye += 30;
                sut++;
                printf("\nSut eklendi.\n");
                printf("Ara toplam --> %d TL\n", bakiye);
                break;
            
            case 3:

                bakiye += 20;
                cikolata++;
                printf("\nCikolata eklendi.\n");
                printf("Ara toplam --> %d TL\n", bakiye);
                break;

            case 4:
                printf("\n%d adet ekmek\n%d adet sut\n%d adet cikolata\n", ekmek,sut,cikolata);
                printf("\nToplam tutar --> %d TL\n", bakiye);
                break;
            
            case 5:
                
                if(bakiye == 0){
                    return 0;
                }

                printf("\nParayi verin: ");
                scanf("%d", &para);

                if(para < bakiye){
                    printf("\nPara yetersiz!\n");
                }
                else {
                    para -= bakiye;
                    printf("\nPara ustu --> %d TL\n\n", para);
                    printf("Saglikli gunler dileriz.\n");
                }
            return 0;

            default:
                
            printf("\nGecersiz Islem!");
        }
    }
    return 0;
}