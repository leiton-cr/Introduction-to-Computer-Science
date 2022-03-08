#include <stdio.h>
#include <cs50.h>

float discount (float price, int percentage);

int main (void){
    float regular = get_float("Insert regular price: ");
    int percentage = 15;
    float sale = discount(regular, percentage);

    printf("Sale price: %.2f\n", sale);
}

float discount (float price, int percentage){
    return price * (100 - percentage) / 100;
}