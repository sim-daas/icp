#include <stdio.h>

int main()
{
    int id, unit;
    char name;
    printf("Enter ID Name Units: ");
    scanf("%d %s %d", &id, &name, &unit);

    if (unit <= 200)
    {
        printf("ID: %d Name: %s Bill: %f", id, name, unit * 1.2);
    }
    else if (unit <= 400)
    {
        printf("ID: %d Name: %s Bill: %f", id, name, unit * 1.5);
    }
    else if (unit <= 600)
    {
        printf("ID: %d Name: %s Bill: %f", id, name, unit * 1.8);
    }
    else
    {
        printf("ID: %d Name: %s Bill: %d", id, name, unit * 2);
    }
}