#include <stdio.h>
#include <string.h>

struct Cities
{
    char Name[100];
    char Country[100];
    char Population[100];
};

int main(void)
{
    struct Cities info[3];
    int i;
    printf("Input three cities: \n");

    for (i = 0; i < 3; i++)
    {
        printf("Name> "); 
        fgets(info[i].Name, sizeof(info[i].Name), stdin);
        printf("Country> "); 
        fgets(info[i].Country, sizeof(info[i].Country), stdin);
        printf("Population> ");
        fgets(info[i].Population, sizeof(info[i].Population), stdin);
    }

    for (i = 0; i < 3; i++)
    {
        info[i].Name[strlen(info[i].Name) - 1] = 0;
        info[i].Country[strlen(info[i].Country) - 1] = 0;
        info[i].Population[strlen(info[i].Population) - 1] = 0;
    }

    printf("\nPrinting the three cities: \n");

    for (i = 0; i < 3; i++)
        printf("%d. %s in %s with a population of %d people \n", (i + 1), info[i].Name, info[i].Country, info[i].Population);
    return 0;
}