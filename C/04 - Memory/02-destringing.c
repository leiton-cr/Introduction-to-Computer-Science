#include <stdio.h>

typedef char* string;

int main (void){

    string s = "Hi!"; 

    printf("%c", *s);
    printf("%c", *(s+1));
    printf("%c", *(s+2));

}