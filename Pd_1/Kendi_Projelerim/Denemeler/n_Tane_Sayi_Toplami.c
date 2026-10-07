//n sayisi girilir. sonrasında n kadar sayi girilip hepsi toplanır 

#include <stdio.h>

int main(){

    int i,n, num, sum = 0;
    scanf("%d ", &n);
    for(i=0; i<n; i++){
        scanf("%d ", &num);
        sum += num;
    }
    printf("%d\n", sum);
    return 0;
}