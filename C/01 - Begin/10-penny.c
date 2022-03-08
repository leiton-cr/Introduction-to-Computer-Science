#include <stdint.h>
#include <math.h>
#include <stdio.h>
#include <cs50.h>

int main (void){
    float amount = get_float("Dollar ammount: ");
    int pennies = round(amount * 100);
    printf("Pennies: %i \n", pennies);
}