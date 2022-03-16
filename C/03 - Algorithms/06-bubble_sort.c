#include <cs50.h>
#include <stdio.h>

void swap(int n [], int i, int j){
    int aux = n [i];
    n [i] = n [j];
    n [j] = aux;
}

int main (void){
    int n [] = {5,2,7,4,1,6,3,0};
    bool swaped;

    for (int i = 0; i < 8; i++){
        swaped = false;
        for (int j = 0; j < i; j++){
            
            if(n[j] > n[j+1]){
                swaped = true;
                swap(n, j, j+1);
            }
        }

        if(! swaped ){
            break;
        }
    }

    for (int i = 0; i < 8; i++){
      printf("%i,", n[i]);
    }
}