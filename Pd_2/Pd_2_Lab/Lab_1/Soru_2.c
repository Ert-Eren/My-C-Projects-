#include <stdio.h>

int x;

void autoDepolamaSinifi(){
    
    printf("\nauto sinifi calistiriliyor...\n\n");
    
    auto int a = 32;

    printf("auto olarak tanimlanan 'a' degiskeninin degeri --> %d\n", a);

    printf("---------------------------");
}

void registerDepolamaSinifi(){
    
    printf("\nregister sinifi calistiriliyor...\n\n");

    register char b = 'G';

    printf("register olarak tanimlanan 'b' degiskeninin degeri --> %c\n", b);

    printf("---------------------------");
}

void externDepolamaSinifi(){
    
    printf("\nextern sinifi calistiriliyor...\n\n");
    
    extern int x;

    printf("extern olarak tanimlanan 'x' degiskeninin degeri --> %d\n", x);

    x = 2;

    printf("\nextern olarak tanimlanan ve modifiye edilen 'x' degeri --> %d\n", x);

    printf("---------------------------");
}

void staticSiniflandirmaSinifi(){

    int i = 0;
    
    printf("\nstatic sinifi calistiriliyor...\n");

    printf("\ndongu basladi: \n");
    
    for (i=1; i<5; i++){
        
        static int y = 5;
        int p = 10;

        y++;
        p++;

        printf("\nstatic tanimlanan 'y' nin %d. iterasyondaki degeri --> %d\n", i,y);
        printf("\nstatic olmayan 'p' nin %d. iterasyondaki degeri --> %d\n", i,p);
    }
    
    printf("\ndongu sona erdi: \n");

    printf("---------------------------");
}

int main(){

    autoDepolamaSinifi();

    registerDepolamaSinifi();

    externDepolamaSinifi();

    staticSiniflandirmaSinifi();

    return 0;
}