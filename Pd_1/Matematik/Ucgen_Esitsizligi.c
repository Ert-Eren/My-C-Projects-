// girilen uzunluklarla bir üçgen çizilebilip cizilemediğini bulma


#include <stdio.h>
#include <math.h>
int main() {

    int a,b,c,cevre;
    float alan,u;
    
    printf("a kenarini giriniz: ");
    scanf("%d", &a);

    printf("b kenarini giriniz: ");
    scanf("%d", &b);
    
    printf("c kenarini giriniz: ");
    scanf("%d", &c);

    if ((b - c) < a && (b + c) > a || (a - c) < b && (a + c) > b || (a - b) < c && (a + b) > c) {
        printf("Bu degerlerle bir ucgen cizilebir. \n");
        cevre = a + b + c;
        u = cevre/2;
        alan = pow((u*(u-a)*(u-b)*(u-c)), 0.5);
        printf("Cevre = %d cm\n", cevre);
        printf("Alan = %.2f cm^2\n", alan);
    
    }
    else if (a==b && a==c && b==c) {
        printf("Bu degerlerle bir eskenar ucgen cizilebilir. \n");
    }
    else if (a==b || a==c || b==c) {
        printf("Bu degerlerle bir ikizkenar ucgen cizilebilir. \n");    
    }
    else {
        printf("Bu degerlerle bir ucgen cizilemez. \n");

    }

    while (getchar() != '\n');
        printf("\nKapatmak icin Enter'a basin.");
    getchar();
    
    return 0;
}