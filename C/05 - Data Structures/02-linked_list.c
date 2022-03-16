#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int id;
    struct node *next;
} node;

int main (void) 
{

    node *list = NULL;
    node *n = malloc(sizeof(node));


    if(n == NULL){
        return 1;
    }

    n->id = 55;
    n->next = NULL;

    list = n;

    n = malloc(sizeof(node));
    if(n == NULL){
        free(list);
        return 1;
    }

    n->id = 65;
    n->next = list;

    list = n;

    n = malloc(sizeof(node));
    if(n == NULL){
        free(list->next);
        free(list);
        return 1;
    }

    n->id = 75;
    n->next = list;

    list = n;

  
    
    for (node *aux = list;aux != NULL; aux = aux->next ){
         printf("%i\n", aux->id);
    }

    while (list != NULL){
        node *aux = list->next;
        free(list);
        list = aux;
    }

   

    return 0;

}