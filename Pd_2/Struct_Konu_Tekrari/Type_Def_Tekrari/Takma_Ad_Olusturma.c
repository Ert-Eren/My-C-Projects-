#include <stdio.h>

typedef float Temperature;
typedef int SensorID;
typedef int Status;

int main(){

    SensorID sensor;
    Temperature currentTemp;
    Temperature threshold;
    Status alertStatus;

    printf("Enter sensor ID: ");
    scanf("%d", &sensor);
    
    printf("Enter current temperature: ");
    scanf("%f", &currentTemp);

    printf("Enter threshold: ");
    scanf("%f", &threshold);

    printf("Enter status alert: ");
    scanf("%d", &alertStatus);

    printf("\n================\n================\n");

    printf("\nSensor ID: %d\n", sensor);
    printf("Current temperature: %.2f\n", currentTemp);
    printf("Threshold: %.2f\n", threshold);
    printf("Alert status: %d\n", alertStatus);

    Temperature difference = currentTemp - threshold;

    printf("Temperature difference: %.2f\n", difference);

    if(currentTemp < 0.0){
        printf("Category: Freezing\n");
    }
    else if(currentTemp > 0.0 && currentTemp < 25.0){
        printf("Category: Normal\n");
    }
    else {
        printf("Category: Hot\n");
    }

    if(currentTemp > threshold && alertStatus == 1){
        printf("Alert: Temperature exceeded threshold!\n");
    }
    else{
        printf("No alert triggered\n");
    }
    return 0;
}