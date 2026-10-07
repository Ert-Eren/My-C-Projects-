#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Book{
    int id;
    char title[50];
    float price;
    int quantity;
}Book;

int main(){

    Book book1,book2;

    printf("Enter book1's id: ");
    scanf("%d", &book1.id);

    printf("Enter book1's title: ");
    scanf("%s", book1.title);

    printf("Enter book1's price: ");
    scanf("%f", &book1.price);

    printf("Enter book1's quantity: ");
    scanf("%d", &book1.quantity);

    printf("\nEnter book2's id: ");
    scanf("%d", &book2.id);

    printf("Enter book2's title: ");
    scanf("%s", book2.title);

    printf("Enter book2's price: ");
    scanf("%f", &book2.price);

    printf("Enter book2's quantity: ");
    scanf("%d", &book2.quantity);

    printf("\nBook 1: ID=%d, Title=%s, Price=%.2f, Quantity=%d\n", book1.id, book1.title, book1.price, book1.quantity);
    printf("Book 2: ID=%d, Title=%s, Price=%.2f, Quantity=%d\n", book2.id, book2.title, book2.price, book2.quantity);

    float book1Value = book1.price * book1.quantity;
    float book2Value = book2.price * book2.quantity;

    printf("\nBook 1 Total Value: %.2f\n", book1Value);
    printf("Book 2 Total Value: %.2f\n", book2Value);
    printf("Combined Inventory Value: %.2f\n", book1Value + book2Value);

    if(book1Value > book2Value){
        printf("Book 1 has higher value\n");
    }
    else if(book2Value > book1Value){
        printf("Book 2 has higher value\n");
    }
    else {
        printf("Both books have equal value\n");
    }

    return 0;
}