#include <string.h>
#include <stdio.h>
#include <cs50.h>


int main (void) {
    string s = "gao";
    printf("%s", s);

    for (size_t i = 0, slen = strlen(s); i < slen; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");

}

