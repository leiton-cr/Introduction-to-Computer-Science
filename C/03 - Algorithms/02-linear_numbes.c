#include <cs50.h>
#include <stdio.h>

int main(void){
    int numbers [] = {4,6,8,2,5,0,7};
    int search = 12;
    
    for (int i = 0; i < 7; i++)
    {
        if( numbers[i] == search){
           printf("Number on the list.");
           return 0;
        }
    }
    printf("Number not on the list.");
    return 1;

}