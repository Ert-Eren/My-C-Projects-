#include <stdio.h>

int main(){

    char str[25];

    printf("Bir seyler yaz: ");
    
    //iki farklı okuma yolu kullanilabilir:
    //gets(str);
    scanf("%s", &str[25]);

    return 0;
}