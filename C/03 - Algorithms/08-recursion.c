#include <stdio.h>
#include <cs50.h>

void print_col(int max){
    printf("#");

    if(max > 0){
        print_col(max-1);
    }
}

void print_row(int max){
    print_col(max);

    printf("\n");
    if(max > 0){
        print_row(max-1);
    }
   
}

void draw_piramid(int n){
    print_row(n);
}

int main (void){
    draw_piramid(3);
}

