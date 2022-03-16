#include <stdio.h>
#include <string.h>
typedef char* string;

int main (void){

    string s = "Hi!"; 
    string t = "Hi!"; 

    printf("%s", (strcmp(s,t) == 0) ? "Same": "Diferent");

}