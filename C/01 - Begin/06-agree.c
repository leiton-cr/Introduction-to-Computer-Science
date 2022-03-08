#include <cs50.h>
#include <stdio.h>

int main (void){

    char c = ' ';

    consult:

    c = get_char("Did you agree? Y/N ");
    
    if (c == 'Y' || c == 'y' ){
        printf("Agreeded");
    }else if (c == 'N' || c == 'n'){
        printf("Disagreeded");
    }else{
        goto consult;
    }

}