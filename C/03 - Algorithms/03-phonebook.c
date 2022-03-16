#include <cs50.h>
#include <stdio.h>
#include <string>

int main(void){
    string names[] = {"Bill", "Logan", "Maria", "Ron", "Marco"};
    string numbers[] = {"506+98756", "506+45618", "506+98842", "506+31518", "506+45515"};
    string search = "Logaan";

    for (int i = 0; i < 5 ; i++){
        if (strcmp(names[i], "search") == 0){
            printf("Found: %s \n", numbers[i] );
            return 0;
        }
    }

    printf( "NOT Found" );
    return -1;

}