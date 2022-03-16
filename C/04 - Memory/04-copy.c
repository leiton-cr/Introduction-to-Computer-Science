#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef char* string;

int main (void){

    string s = "hi!"; 
  
    int len = strlen(s);

    string t = malloc(len + 1);

    if ( t == NULL ){
        return 1;
    }

    strcpy(t,s);
/*
    for (size_t i = 0; i < len + 1; i++)
    {
        t[i] = s[i];
    }
    */


    if(len > 0){
        t[0] = toupper(t[0]);
    }
    
    printf("%s \n", s);
    printf("%s \n", t);

    free(t);
}