// 1 den N ye kadar olan sayilari rekursif fonksiyon kullanarak yazan program
#include <stdio.h>

int oneToN(int n);

int main(){

    int sayi = 10;
    
    printf("\n");
    oneToN(sayi);

    return 0;
}

int oneToN(int n){
    
    if (n == 0){
        return 0;
    }

    oneToN(n-1);
    printf("%d\n",n);

    return 0;
}

