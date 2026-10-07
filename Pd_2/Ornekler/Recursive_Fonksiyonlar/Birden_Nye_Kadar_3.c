// 1 den N ye kadar 1 ve 2. projenin birleşmiş hali
#include <stdio.h>

int oneToN(int n);
int sumOneToN(int n);

int main(){

    int sayi = 10;
    
    printf("\n");
    oneToN(sayi);

    printf("\nSayilarin toplami --> %d\n", sumOneToN(sayi));

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

int sumOneToN(int n){

    if (n == 1){
        return n;
    }
    else{
        return (n + sumOneToN(n-1));
    }
}