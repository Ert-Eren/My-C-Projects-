#include <stdio.h>

int fib(int n);

int main(){
    
    int eleman;

    printf("\nFibonacci dizisini kacinci elemana kadar yazacaksin: ");
    scanf("%d", &eleman);

    int i;
    printf("\n");
    for(i=1; i<=eleman; i++){
        printf("%d\n",fib(i));
    }
    
    
    return 0;
}

int fib(int n){
    
    if (n <= 1){
        return n;
    }
    else{
        return fib(n-1) + fib(n-2);
    }
    
    
}

/* 1 1 2 3 5 8 13 21.....
fib(1) = 1
fib(2) = 1
fib(3) = 2
fib(4) = 3
fib(5) = 5
fib(6) = fib(5) + fib(4) 
.
.
.
fib(n) = fib(n-1) + fib(n-2)*/ 