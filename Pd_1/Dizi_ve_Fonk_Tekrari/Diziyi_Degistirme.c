#include <stdio.h>

void myArray(int arr[]);

int main(){

    int array[5] = {1,2,3,4,5};
    
    printf("\nDizinin normal hali: \n\n");

    int j;
    for(j=0; j<5; j++){
        printf("%d\n", array[j]);
    }

    myArray(array);

    printf("\nDizinin 2 ile carpilmis hali: \n\n");

    int i;
    for(i=0; i<5; i++){
        printf("%d\n", array[i]);
    }

    return 0;
}

void myArray(int arr[]){
    int i;
    for(i=0; i<5; i++){
        arr[i] = arr[i] * 2;
    }

}