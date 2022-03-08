#include <stdio.h>
#include <stdint.h>
#include <cs50.h>

int main(void){
    
    // Prompt user for x
    long x = get_long("X: ");

    // Prompt user for y
    long y = get_long("Y: ");

    // Preform addition
    long r = x+y;

    printf("Result: %li \n", r);
}