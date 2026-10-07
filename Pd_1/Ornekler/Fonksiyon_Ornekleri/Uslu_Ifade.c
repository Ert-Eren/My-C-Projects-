#include <stdio.h>

int usAl(int taban, int us);

int main(){

    int taban, us,sonuc;
    
    printf("\n\tUs Alma Programı\n\n");
    printf("\nTaban degerini girin: ");
    scanf("%d", &taban);
    printf("\nUs degerini girin: ");
    scanf("%d", &us);

    if (taban == 0 && us == 0){
        printf("\nTanımsız!\n");
        return 0;
    }

    if (us < 0){
        printf("\nBu program negatif us hesaplayamaz\n");
        return 0;
    }
    
    sonuc = usAl(taban,us);

    printf("\n%d^%d --> %d\n", taban, us, sonuc);

    return 0;
}

int usAl(int taban, int us){
    int i;
    int sonuc = 1;

    if (us == 0){
        return 1;
    }
    
    for(i=0; i<us; i++){
        sonuc = sonuc * taban;
    }
    
    return sonuc;
}