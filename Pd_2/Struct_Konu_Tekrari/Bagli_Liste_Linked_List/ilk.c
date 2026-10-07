#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
}node;

void writeLinkedList(struct Node* n);

int main(){

    node* n = (node*)malloc(sizeof(node));

    n->data = 2;
    n->next = NULL; //next her zaman NULL ile başlatılır.

    n->next = (node*)malloc(sizeof(node));
    n->next->data = 3;
    n->next->next = NULL;

    printf("\n%d\n", n->data);
    printf("%d\n", n->next->data);

    printf("---------------------------\n");

    printf("%p\n", &n);
    printf("%p\n", n);
    printf("%p\n", &n->data);
    printf("%p\n", &n->next);
    printf("%p\n", &n->next->data);

    printf("---------------------------\n");

    writeLinkedList(n);

    return 0;
}

void writeLinkedList(struct Node* n){
    
    node* iterator = n; // iterator geçici demek n yi geçici bir adreste tutuyoruz.
    while(iterator != NULL){
        printf("%d ", iterator->data);
        iterator = iterator->next;
    }   
}