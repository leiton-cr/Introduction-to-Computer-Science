#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct
{
    string name;
    string number;

} person;

int main(void)
{

    person people[2];

    people[0].name = "Carter";
    people[0].number = "506-85684413";

    people[1].name = "Cartera";
    people[1].number = "506-65684413";

    for (int i = 0; i < 5; i++)
    {
        if (strcmp(people[i].name, "Carteraa") == 0)
        {
            printf("Found: %s \n", people[i].number);
            return 0;
        }
    }

    printf("NOT Found\n");
    return -1;
}