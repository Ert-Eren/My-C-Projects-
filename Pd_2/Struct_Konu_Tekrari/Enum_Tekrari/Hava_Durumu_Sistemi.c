#include <stdio.h>

enum WeatherCondition{
    SUNNY,
    CLOUDY,
    RAINY,
    STORMY,
    SNOWY
};

void getWeatherAdvice(enum WeatherCondition weather);
void getActivitySuggestion(enum WeatherCondition weather);

int main(){

    int weatherInput;
    printf("\nChoose the weather:\n\n");
    printf("0)Sunny\n1)Cloudy\n2)Rainy\n3)Stormy\n4)Snowy\n");
    scanf("%d", &weatherInput);

    enum WeatherCondition currentWeather;

    switch(weatherInput){
        case 0:
            currentWeather = 0;
            break;
        case 1:
            currentWeather = 1;
            break;
        case 2:
            currentWeather = 2;
            break;
        case 3:
            currentWeather = 3;
            break;
        case 4:
            currentWeather = 4;
            break;
    }

    printf("\nCurrent weather: %d\n", currentWeather);
    
    getWeatherAdvice(currentWeather);
    getActivitySuggestion(currentWeather);

    return 0;
}

void getWeatherAdvice(enum WeatherCondition weather){
    switch(weather){
        case SUNNY:
            printf("Perfect day for outdoor activities!\n");
            break;
        case CLOUDY:
            printf("Good day for a walk, no sun protection needed\n");
            break;
        case RAINY:
            printf("Don't forget your umbrella!\n");
            break;
        case STORMY:
            printf("Stay indoors and avoid travel.\n");
            break;
        case SNOWY:
            printf("Drive carefully and dress warmly.\n");
            break;
    }
}

void getActivitySuggestion(enum WeatherCondition weather){
    switch(weather){
        case SUNNY:
            printf("Suggested activity: Beach or hiking\n");
            break;
        case CLOUDY:
            printf("Suggested activity: Photography or gardening\n");
            break;
        case RAINY:
            printf("Suggested activity: Reading or indoor games\n");
            break;
        case STORMY:
            printf("Suggested activity: Movie marathon\n");
            break;
        case SNOWY:
            printf("Suggested activity: Skiing or hot cocoa\n");
            break;
    }
}