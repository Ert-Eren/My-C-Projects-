#include <stdio.h>

void tersDizi(int arr[], int boyut){
    int i;
    for(i=boyut-1; i>=0; i--){
        printf("%d. Sıra = %d\n",i, arr[i]);
    }
}

int main(){
    int arr[5] = {1,2,3,4,5};
    
    tersDizi(arr,5);

    return 0;
}