#include <stdio.h>

float toFahrenheit(float celcius);
float toKelvin(float celcius);

int main(){

    float celcius;
    int secim;
    
    printf("\n\tSicaklik Cevirme Programi\n\n");

    printf("\nSicaklik degerini girin ('C): ");
    scanf("%f", &celcius);

    printf("\nCevirmek istediginiz sicaklik birimini secin: \n");
    printf("\n1- Fahrenheit\n2- Kelvin\n\nSecim = ");
    scanf("%d", &secim);

    switch(secim){
        case 1:
            printf("\n%.2f 'C --> %.2f 'F\n", celcius, toFahrenheit(celcius));
            break;
        case 2:
            printf("\n%.2f 'C --> %.2f 'K\n", celcius, toKelvin(celcius));
            break;
    }

    return 0;
}

float toFahrenheit(float celcius){
    return (celcius * 1.8) + 32;
}

float toKelvin(float celcius){
    return celcius + 273.15;
}