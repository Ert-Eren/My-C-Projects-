#include <stdio.h>

int ciftMi(int sayi);

int main(){

    int sayi;
    
    printf("Bir sayi girin: ");
    scanf("%d", &sayi);

    if (ciftMi(sayi)){
        printf("%d sayisi cifttir.", sayi);
    }
    else{
        printf("%d sayisi tektir.", sayi);
    }

    return 0;
}

int ciftMi(int sayi){
    if (sayi % 2 == 0){
        return 1;
    }
    else{
        return 0;
    }
}