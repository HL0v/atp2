#include <stdio.h>
#include <stdlib.h>
#include "voids.c"




int main(){


    Node* list = lstInit();

    list = lstValue(list, 10);
    list = lstValue(list, 20);
    list = lstValue(list, 30);

     while(list != NULL){
         printf("%d\n", list->data);
         list = list->next;
    }
    lstPrint(list);
    free(list);
    return 0;
}