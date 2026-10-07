//Klavyeden girilen A B C sayılarının en büyüğünü bulan program
#include <stdio.h>

int main(){

    int A,B,C;

    printf("3 tane sayi giriniz: ");
    scanf("%d %d %d", &A,&B,&C);

    if (A >= B && A >= C){
        printf("En buyuk sayi = %d", A);
    }
    else if (B >= A && B >= C){
        printf("En buyuk sayi = %d", B);
    }
    else if (C >= B && C >= A){
        printf("En buyuk sayi = %d", C);
    }
    else if (A == B && B == C){
        printf("Butun sayilar esit!");
    }
    else{
        printf("HATA!");
    }
    
    
    return 0;
}