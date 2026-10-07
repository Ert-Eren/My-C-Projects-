#include <stdio.h>

int x = 2;
void func(int x);

int main(){

    printf("Global x-> %d",x);

    int x = 7;
    func(x);

    printf("\nMain x-> %d",x);

    return 0;
}

void func(int x){
    x += 3;
    printf("\nParametre x-> %d",x);
    {
        int x = 3;
        x +=5;
        printf("\nIc Blok x-> %d",x);
    }
    
}