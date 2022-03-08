#include <stdio.h>

void meow(void);

int main(void)
{
    int i = 0;

    while (i++ < 3)
    {
       meow();
    }

    for (int i = 0; i < 3; i++)
    {
       meow();
    }

    int j = 0;

    do
    {
       meow();
    } while (++j < 3);
}


void meow(void){
     printf("meow\n");
}