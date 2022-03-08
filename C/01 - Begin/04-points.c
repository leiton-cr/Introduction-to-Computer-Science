#include <stdio.h>
#include <stdint.h>
#include <cs50.h>

int main (void){
    const int MINE = 2;
    int points = get_int("How many points did you loose");

    if(points < MINE){
        printf("You lost fewer points");
    }else if(points > MINE){
        printf("You lost more points");
    }else{
        printf("You lost same number of points");
    }

}