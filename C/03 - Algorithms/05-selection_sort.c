#include <cs50.h>
#include <stdio.h>

void swap(int n [], int i, int j){
    int aux = n [i];
    n [i] = n [j];
    n [j] = aux;
}

int main (void){
    int n [] = {5,2,7,4,1,6,3,0};
 
    for (int i = 0, min; i < 8; i++){
        min = i;

        for (int j = i; j < 8; j++){
            if(n[j] < n[min]){
                min = j;
            }
        }
        swap(n, i, min);
    }

    for (int i = 0; i < 8; i++){
      printf("%i,", n[i]);
    }
}