#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char *name;
} Country;

int compare_countries(const void *a, const void *b)
{
    const Country *country_a = (const Country *)a;
    const Country *country_b = (const Country *)b;
    return strcmp(country_a->name, country_b->name);
}

void reorder(int n, Country *countries)
{
    qsort(countries, n, sizeof(Country), compare_countries);
    printf("The names of countries in rearranged order are : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", countries[i].name);
    }
}

int main()
{
    int n;
    Country *countries;

    printf("Enter the number of countries: ");
    scanf("%d", &n);

    countries = (Country*) malloc(n * sizeof(Country));
    if (countries == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    printf("Enter the names of the countries:\n");
    getchar(); // consume the newline character left by scanf
    for (int i = 0; i < n; i++)
    {
        char buffer[100];
        fgets(buffer, 100, stdin);
        buffer[strcspn(buffer, "\n")] = '\0'; // remove the trailing newline character
        countries[i].name = (char*) malloc(strlen(buffer) + 1);
        if (countries[i].name == NULL)
        {
            printf("Memory allocation failed");
            return 1;
        }
        strcpy(countries[i].name, buffer);
    }

    reorder(n, countries);

    for (int i = 0; i < n; i++)
    {
        free(countries[i].name);
    }
    free(countries);

    return 0;
}