#include <stdio.h>

int main(){

    int xyz = 10, k; // int tipinde değişken tanımlıyoruz.

    int *p; // int tipinde pointer tanımlıyoruz.

    p = &xyz; // x değişkeninin adresini pointera atıyoruz. ('&' ile)

            // k değişkenine xyz nin değeri atanır pointerlar değer tutmaz. Değişkenleri işaret eder.
    k = *p; 
            // başına '*' konulduğunda işaret ettiği değişkenin değerini gösterir.

//.......................................................................................................//
    
    int i, *iptr;

    iptr = &i; // iptr örneğin 1000 nolu adresi göstersin:

    (*iptr)++; // bu işlem 1000 nolu adresin içeriğini 1 arttırır.

    iptr++; // bu işlem iptr nin 1004 nolu adresi göstermesini sağlar.

    (*iptr) += 2; // bu işlem 1000 nolu adresin içeriğini 2 arttırır.
    
    (*iptr) = 7; // bu işlem 1000 nolu adresin içeriğini 7 yapar.

    *(iptr+2) = 5; // iptr 1000 nolu adresi gösteriyorsa 1008 nolu adresin içeriğini 5 yapar.


    return 0;
}