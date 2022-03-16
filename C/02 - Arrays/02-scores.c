#include <stdio.h>
#include <cs50.h>

int main (void) {

    int scores [3]; 
    int scoresAdd = 0;

    for (int i = 0; i < sizeof(scores)/sizeof(int); i++)
    {
        scores[i] = get_int("Score #%i: ", i + 1);
    }

    for (int i = 0; i < sizeof(scores)/sizeof(int); i++)
    {
        scoresAdd += scores[i];
    }
    
    printf("Score: %f ", scoresAdd / 3.0);

}

