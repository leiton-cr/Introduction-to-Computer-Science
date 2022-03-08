#include <stdio.h>
#include <cs50.h>

int main(void)
{

    int n;

    do
    {
        get_int("Size of platform: ");
    } while (n < 1);

    for (int i = 0; i < n; i++)
    {
        for (int j = n - i; j > 0; j--)
        {
            printf(" ");
        }

        for (int j = 0; j < i; j++)
        {
            printf("#");
        }

        printf("\n");
    }
}
