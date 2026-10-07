#include <stdio.h>
#include <string.h>

struct Product{
    char name[30];
    float price;
    int stock;
};

int findMostExpensive(struct Product products[], int size);
float calculateTotalValue(struct Product products[], int size);
int findLowStock(struct Product products[], int size, int threshold);

int main(){

    struct Product inventory[3];

    for(int i=0; i<3; i++){
        scanf("%s", inventory[i].name);
        scanf("%f", &inventory[i].price);
        scanf("%d", &inventory[i].stock);
    }

    printf("\n");
    
    for(int i=0; i<3; i++){
        printf("Product %d: %s - Price: %.2f, Stock: %d\n", i, inventory[i].name, inventory[i].price, inventory[i].stock);
    }

    int mostExpensiveIndex = findMostExpensive(inventory,3);

    printf("Most expensive product: %s\n", inventory[mostExpensiveIndex].name);

    float totalValue = calculateTotalValue(inventory,3);

    printf("Total inventory value: %.2f\n", totalValue);

    int threshold;
    printf("Enter threshold: ");
    scanf("%d",&threshold);

    int lowStock = findLowStock(inventory,3,threshold);

    printf("Products with low stock: %d\n", lowStock);

    if(inventory[mostExpensiveIndex].stock > 10.0){
        printf("Most expensive product is well stocked\n");
    }
    else{
        printf("Most expensive product needs restocking\n");
    }
    return 0;
}

int findMostExpensive(struct Product products[], int size){
    int maxIndex = 0;
    for(int i=0; i<size; i++){
        if(products[i].price > products[maxIndex].price){
            maxIndex = i;
        }
    }
    return maxIndex;
}

float calculateTotalValue(struct Product products[], int size){
    float totalValue = 0.0;
    for(int i=0; i<size; i++){
        totalValue += (products[i].price * products[i].stock);
    }
    return totalValue;
}

int findLowStock(struct Product products[], int size, int threshold){
    int lowStock = 0;
    for(int i=0; i<size; i++){
        if(products[i].stock < threshold){
            lowStock++;
        }
    }
    return lowStock;
}