#include <string.h>
#include <stdio.h>
#include <cs50.h>

#include <ctype.h>

int main (void) {
    string s = "gao!~";
    

    for (size_t i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");

    for (size_t i = 0, n = strlen(s); i < n; i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
            printf("%c", s[i] - 32);
        else    
            printf("%c", s[i]);
    }
    printf("\n");

     for (size_t i = 0, n = strlen(s); i < n; i++)
    {
        if(islower(s[i]))
            printf("%c", s[i] - 32);
        else    
            printf("%c", s[i]);
    }
    printf("\n");

     for (size_t i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", toupper(s[i]));
    }
    printf("\n");
    

}

