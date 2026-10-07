#include <stdio.h>
#include <stdlib.h>

int main(){

    int a[100];
    int boyut;
    scanf("%d", &boyut);

    int *c = (int*) malloc(boyut * sizeof(int)); // malloc rastgele bir dizi döndürür. 
    free(c);

    int *d = (int*) calloc(boyut, sizeof(int)); // calloc her bir elemanı "0" ile başlatır.
    free(d);
    
    int *e = (int*) calloc(100, sizeof(int)); // boyut kadar yer ayır ve içlerine "0" yaz.

    int *e_buyuk = (int*) realloc(e, 150); // 100-150 arasını boş bırakıp hafızada yer tutar.
    int *e_kucuk = (int*) realloc(e_buyuk, 50); // ilk 50 elemanı korur öteki 50 elemana erişim olmaz.
    
    free(e);
    free(e_buyuk);
    free(e_kucuk);

    return 0;
}

