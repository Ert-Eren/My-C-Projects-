#include <stdio.h>

int max(int x, int y, int z);

int main(){

    int a,b,c;
    printf("3 adet sayi girin: ");
    scanf("%d %d %d", &a,&b,&c);
    printf("En buyuk sayi: %d", max(a,b,c));

    return 0;
}

int max(int x, int y, int z){

    int maximum;
    if (x>y){
        if(x>z)
            maximum = x;
        else
            maximum = z;
        
    }
    else if (y>z)
        maximum = y;
    else   
        maximum = z;
    
    return maximum;
}


