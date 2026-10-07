#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct kisiBilgi{
    char isim[10];
    int yas;
    float boy;
}; 

int main(){

    struct kisiBilgi* kisi1;

    kisi1 = (struct kisiBilgi*) malloc(sizeof(struct kisiBilgi));

    printf("\nIsim girin: ");
    fgets(kisi1->isim, sizeof(kisi1->isim), stdin);

    printf("Yas girin: ");
    scanf("%d", &kisi1->yas);

    printf("Boy girin(m): ");
    scanf("%f", &kisi1->boy);

    printf("------------------------------------\n");
    printf("Girilen isim -> %s", kisi1->isim);
    printf("Girilen yas -> %d\n", kisi1->yas);
    printf("Girilen boy(m) -> %.2f", kisi1->boy);

    return 0;
}

//struct pointer olarak kullanıldığında -> isareti ile gösterilir.