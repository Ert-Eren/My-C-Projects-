#include <stdio.h>

int usAl(int taban, int us);

int main(){

    int taban, us;

    printf("\nSirasiyla taban ve us degerini gir: ");
    scanf("%d %d", &taban, &us);

    int result = usAl(taban, us);

    printf("\n%d^%d --> %d\n",taban, us, result);

    return 0;
}

int usAl(int taban, int us){
    
    if (us == 0) {
        return 1;
    }
    
    else {
        return taban * usAl(taban, us - 1);
    }
}

/*

usAl(2,1) = 2
usAl(2,2) = 4
usAl(2,3) = 2 * usAl(2,2) = 8
.
.
.


*/