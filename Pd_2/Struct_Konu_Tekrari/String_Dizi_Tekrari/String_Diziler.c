#include <stdio.h>
#include <string.h>


int main(){ 

    char text1[50];
    char text2[50];

    strlen(text1); //strlen fonksiyonu dizideki karakter sayısını sayar. 
    strcpy(text1, text2); //strcpy fonksiyonu text2'yi text1'e kopyalar.
    strcat(text1,text2); //strcat fonksiyonu girilen iki diziyi birleştirir.
    strcmp(text1,text2); //strcmp fonksiyonu üç farklı türde değer döndürür: dizeler özdeşse 0, ilk dize alfabetik olarak ikinciden önce geliyorsa negatif bir değer ve ilk dize alfabetik olarak ikinciden sonra geliyorsa pozitif bir değer döndürür.
    return 0;
}