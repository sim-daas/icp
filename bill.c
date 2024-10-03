#include <stdio.h>

int main()
{
    int id, unit;
    char name;
    printf("Enter ID Name Units: ");
    scanf("%d %c %d", &id, &name, &unit);

    if (unit <= 200)
    {
        printf("ID: %d Name: %c Bill: %f", id, name, unit * 1.2);
    }
    else if (unit <= 400)
    {
        printf("ID: %d Name: %c Bill: %f", id, name, unit * 1.5);
    }
    else if (unit <= 600)
    {
        printf("ID: %d Name: %c Bill: %f", id, name, unit * 1.8);
    }
    else
    {
        printf("ID: %d Name: %c Bill: %d", id, name, unit * 2);
    }
}