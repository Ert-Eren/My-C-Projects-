#include <stdio.h>

void printVal(int *p);

int main(){

    int i = 10, *p = &i;
    printVal(++p);

}

void printVal(int *p){
    
    printf("%d\n", *p);
    
}
