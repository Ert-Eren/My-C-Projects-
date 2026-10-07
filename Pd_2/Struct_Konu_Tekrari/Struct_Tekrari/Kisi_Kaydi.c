#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Contact{
    char name[50];
    char phone[20];
    char email[40];
    int age;
};

int main(){

    struct Contact person;
    
    printf("\nEnter your name: ");
    fgets(person.name, sizeof(person.name), stdin);
    
    printf("Enter your phone number: ");
    scanf("%s", person.phone);

    printf("Enter your email: ");
    scanf("%s", person.email);

    printf("Enter your age: ");
    scanf("%d", &person.age);

    int phoneLength = strlen(person.phone);

    if(person.age > 120 || person.age < 0){
        printf("Invalid age!\n");
        return 1;
    }
    if(phoneLength < 10 || phoneLength > 10){
        printf("Invalid phone number!\n");
        return 1;
    }

    printf("===============\n===============\n\n");
    printf("Contact Information:\n");
    printf("Name: %s", person.name);
    printf("Phone Number: %s\n", person.phone);
    printf("Email: %s\n", person.email);
    printf("Age: %d\n", person.age);

    int nameLength = strlen(person.name);

    printf("Name length: %d\n", nameLength);

    char category[10];
    
    if(person.age >= 0 && person.age <= 17){
        strcpy(category, "Minor");
    }
    else if(person.age > 17 && person.age <= 64){
        strcpy(category, "Adult");
    } 
    else if(person.age >= 65){
        strcpy(category, "Senior");
    }  

    printf("Category: %s\n", category);

    return 0;
}