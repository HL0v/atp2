#include <stdio.h>
#include <stdlib.h>


typedef struct node{
    int data;
    struct node* next;
}Node;


Node* lstInit(){
    return NULL;
}

Node* lstNew(int data){
    Node* newNode = (Node*) malloc(sizeof(Node));
    if (newNode == NULL){
        printf("Error allocating memory\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

Node* lstValue(Node* list, int value)
{
    Node* newValue = (Node*) malloc(sizeof(Node));
    if (newValue == NULL) {
        printf("Error allocating memory\n");
        exit(1);
    }
    newValue->data = value;
    newValue->next = list;
    return newValue;

    newValue->data = value;
    newValue->next = list;
    return newValue;
}
void lstPrint (Node* list)
{
    
    for (Node* getList = list; getList != NULL; getList = getList->next){
       printf("data = %d\n", getList->data);
    }
    
}    