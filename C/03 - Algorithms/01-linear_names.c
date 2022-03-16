#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[] = {"Bill", "Logan", "Maria", "Ron", "Marco"};
    string search = "Logaan";

    for (int i = 0; i < 5; i++)
    {
        if ( strcmp(names[i], search) == 0 )
        {
            printf("FOUND \n");
            return 0;
        }
    }

    printf("NOT FOUND \n");
    return -1;
}