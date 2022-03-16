#include <stdio.h>
#include <stdlib.h>

void swap (int *a, int *b);

int main (void){
    int a = 1;
    int b = 2;

    printf("a:%i b:%i \n",a,b);

    swap(&a,&b);
  
    printf("a:%i b:%i \n",a,b);
}

void swap (int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}