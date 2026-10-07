#include <stdio.h>

int main(){

    int matris[3][3] = { 
                        {10,20,30},
                        {40,50,60},
                        {70,80,90}
                        };
    int i,j;
    printf("\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d ", matris[i][j]);
        }
        printf("\n");
    }

    return 0;
}