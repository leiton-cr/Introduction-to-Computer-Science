#include <string.h>
#include <stdio.h>
#include <cs50.h>

int string_length(string s);

int main (void) {
    string s = "David";

    int i = string_length(s);

    int j = strlen(s);

    printf("%i \n",i);
    printf("%i \n",j);
}

int string_length(string s){
    int i = 0;
    while(s[++i] != '\0');
    return i;
}