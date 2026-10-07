#include <stdio.h>

enum trafficLight{
    RED,
    YELLOW,
    GREEN
};

int main(){

    int input;
    scanf("%d", &input);

    enum trafficLight currentLight;

    if(input == 0){
        currentLight = RED;
    }
    else if(input == 1){
        currentLight = YELLOW;
    }
    else{
        currentLight = GREEN;
    }


    if(currentLight == RED){
        printf("Current light: RED\n");
    }
    else if(currentLight == YELLOW){
        printf("Current light: YELLOW\n");
    }
    else{
        printf("Current light: GREEN\n");
    }

    printf("Numeric value: %d\n", currentLight);

    if(currentLight == RED){
        printf("Action: Stop\n");
    }
    else if(currentLight == YELLOW){
        printf("Action: Caution\n");
    }
    else{
        printf("Action: Go\n");
    }

    enum trafficLight nextLight;
    if(currentLight == RED){
        nextLight = GREEN;
    }
    else if(currentLight == YELLOW){
        nextLight = RED;
    }
    else{
        nextLight = YELLOW;
    }

    if(nextLight == RED){
        printf("Next light: RED\n");
    }
    else if(nextLight == YELLOW){
        printf("Next light: YELLOW\n");
    }
    else{
        printf("Next light: GREEN\n");
    }

    return 0;
}