// 1 den N ye kadar olan sayilari rekürsif fonksiyon kullanarak toplayan program
#include <stdio.h>

int sumOneToN(int n);

int main(){

    int sayi = 10;

    printf("\nToplam --> %d\n", sumOneToN(sayi));

    return 0;
}

int sumOneToN(int n){
    
    if (n == 1){
        return n;
    }
    else{
        return (n + sumOneToN(n-1));
    }
}