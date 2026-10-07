//[ 1+x+x^2/2!+x^3/3!+....] dizisini hesaplayan program

#include <stdio.h>
#include <math.h>


int main(){

    int x, i, terim=1, sonuc=1, islem, sonislem;
    
    printf("Sayi girin: ");
    scanf("%d", &x);
    printf ("terimi giriniz : ");
    scanf ("%d", &terim);

    for (i=2; i<=terim; i++){
        sonuc*=i;
        islem = pow (x, i)/sonuc;
        
    }
    sonislem = islem + 1 + x;

    printf ("sonislem = %d", sonislem);
    
    return 0;
}