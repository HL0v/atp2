#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data;
    struct node* prev;
    struct node* next;
} Node;

Node* create_node(int data){
    Node* newNode = (Node*)malloc(sizeof(Node));
    if(newNode == NULL){
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

void print_list_forward(Node* head){
    Node* current = head;
    while(current != NULL){
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}
void print_list_reverse(Node* tail){
    Node* current = tail;
    while(current != NULL){
        printf("%d ", current->data);
        current = current->prev;
    }
    printf("\n");
}
