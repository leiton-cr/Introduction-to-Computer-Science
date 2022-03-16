#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    int key = atoi(argv[1]);
    if (argc != 2 || !key)
    {
        printf("Usage: ./caesar key");
        return 1;
    }

    string phrase = get_string("Phrase to encrypt: ");

    printf("Original : %s \n", phrase);
    printf("Encrypted: ");

    for (int i = 0, len = strlen(phrase); i < len; i++)
    {
        if ((phrase[i] >= 'a' && phrase[i] <= 'z') || phrase[i] >= 'A' && phrase[i] <= 'Z')
        {
            int offset = islower(phrase[i]) ? 97 : 65;
            printf("%c", (phrase[i] - offset + key) % 26 + offset);
        }
        else
        {
            printf("%c", phrase[i]);
        }
    }

    printf("\n");

    return 0;
}