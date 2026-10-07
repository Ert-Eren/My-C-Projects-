#include <stdio.h>

int main(){

    const int limit = 100;
    volatile int sensor;

    printf("Sensor degeri girin: ");
    scanf("%d", &sensor);

    if (sensor > limit){
        printf("\nLimit!");
    }
    else{
        printf("\nGirilen deger -> %d", sensor);
    }

    return 0;
}