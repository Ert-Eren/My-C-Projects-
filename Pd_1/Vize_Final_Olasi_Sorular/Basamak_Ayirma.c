//Klavyeden girilen 3 basamaklı sayının basamaklarını ayıran program

#include <stdio.h>

int main(){

    int sayi;
    int yuzler,onlar,birler;

    printf("3 basamakli bir sayi girin: ");
    scanf("%d",&sayi);

    yuzler = sayi / 100;
    onlar = (sayi / 10) % 10;
    birler = sayi % 10;

    printf("\nYuzler basamagi--> %d\n",yuzler);
    printf("Onlar basamagi--> %d\n",onlar);
    printf("Birler basamagi--> %d\n",birler);


    return 0;
}