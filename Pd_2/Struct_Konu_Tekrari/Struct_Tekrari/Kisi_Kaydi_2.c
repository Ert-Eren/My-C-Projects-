#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    char phone[20];
    char email[40];
    int age;
} Contact;

Contact* createContact() {
    Contact* contact = (Contact*)malloc(sizeof(Contact));
    if (contact != NULL) {
        strcpy(contact->name, "");
        strcpy(contact->phone, "");
        strcpy(contact->email, "");
        contact->age = 0;
    }
    return contact;
}

void populateContact(Contact* contact) {
    printf("Enter name: ");
    scanf("%s", contact->name);
    printf("Enter phone: ");
    scanf("%s", contact->phone);
    printf("Enter email: ");
    scanf("%s", contact->email);
    printf("Enter age: ");
    scanf("%d", &contact->age);
}

void displayContact(const Contact* contact) {
    printf("Name: %s\n", contact->name);
    printf("Phone: %s\n", contact->phone);
    printf("Email: %s\n", contact->email);
    printf("Age: %d\n", contact->age);
}

void updateContact(Contact* contact) {
    int choice;
    printf("What would you like to update?\n");
    printf("1. Name\n");
    printf("2. Phone\n");
    printf("3. Email\n");
    printf("4. Age\n");
    printf("Enter choice (1-4): ");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1:
            printf("Enter new name: ");
            scanf("%s", contact->name);
            printf("Contact updated successfully\n");
            break;
        case 2:
            printf("Enter new phone: ");
            scanf("%s", contact->phone);
            printf("Contact updated successfully\n");
            break;
        case 3:
            printf("Enter new email: ");
            scanf("%s", contact->email);
            printf("Contact updated successfully\n");
            break;
        case 4:
            printf("Enter new age: ");
            scanf("%d", &contact->age);
            printf("Contact updated successfully\n");
            break;
        default:
            printf("Invalid choice\n");
            break;
    }
}

int main() {
    Contact* contact = createContact();
    
    if (contact != NULL) {
        populateContact(contact);
        
        printf("--- Initial Contact ---\n");
        displayContact(contact);
        
        printf("--- Updating Contact ---\n");
        updateContact(contact);
        
        printf("--- Updated Contact ---\n");
        displayContact(contact);
        
        free(contact);
        printf("Contact management completed\n");
    }
    
    return 0;
}