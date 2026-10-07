//Fibonacci dizisinin ilk 10 hanesini yazdıran program
#include <stdio.h>

int main(){

    int i;
    int a = 1;
    int b = 1;
    int c;

    printf("%d ", a);
    printf("%d ", b);

    for(i=1; i<=8; i++){

        c = a+b;
        a = b;
        b = c;

        printf("%d ", c);
    }
    
    return 0;
}