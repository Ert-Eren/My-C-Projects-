#include <stdio.h>

int main(){ 

    int i,j;

    for(i=1; i<=7; i+=3){
        printf("\n");
        for(j=1; j<=10; j++){
            printf("%d x %d = %d\n", i,j,i*j);
            
        }
    }
    for(i=2; i<=8; i+=3){
        printf("\n");
        for(j=1; j<=10; j++){
            printf("%16d x %d = %d\n", i,j,i*j);
            
        }
    }
    for(i=3; i<=9; i+=3){
        printf("\n");
        for(j=1; j<=10; j++){
            printf("%32d x %d = %d\n", i,j,i*j);
            
        }
    }
    return 0;
}