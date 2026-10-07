#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
}node;

int main(){

    node* n = (node*)malloc(sizeof(node));
    n->data = 10;
    n->next = NULL;

    n->next = (node*)malloc(sizeof(node));
    n->next->data = 15;
    n->next->next = NULL;

    printf("\n%d\n", n->data);
    printf("%d\n", n->next->data);

    printf("---------------------------------\n\n");

    printf("%p\n", &n);
    printf("%p\n", n);
    printf("%p\n", &(n->data));
    printf("%p\n", &(n->next));

    return 0;
}