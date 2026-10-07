#include <stdio.h>

void fun(int x);

int main(){

    int a = 4;
    fun(a);

    return 0;
}

void fun(int x){
    
    if (x>0){
        
        fun(--x);
        printf("%d\t", x);
        fun(--x);
        
    }
}