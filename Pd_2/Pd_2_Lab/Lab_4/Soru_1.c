#include <stdio.h>

int main(){

    int a,b,c;
    char *p = 0;
    int *q = 0;
    double *s = 0;

    a = (int)(p + 3);
    b = (int)(q + 2);
    c = (int)(s + 1);

    printf("%d %d %d", a,b,c);

    return 0;
}