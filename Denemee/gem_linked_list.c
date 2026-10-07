#include <stdio.h>
#include <stdlib.h>

struct vagon{
    int data;
    struct vagon* next;
};

struct vagon* basaEkle(struct vagon* head, int newData);

int main(){

    struct vagon* head = NULL;
    head = (struct vagon*)malloc(sizeof(struct vagon));

    head->data = 10;

    head->next = NULL;

    printf("\nIlk vagonun verisi: %d\n", head->data);

    return 0;
}

struct vagon* basaEkle(struct vagon* head, int newData){
    struct vagon* yeniVagon = (struct vagon*)malloc(sizeof(struct vagon));
    yeniVagon->data = newData;

    yeniVagon->next = head;

    head = yeniVagon;
    
    return head;
}