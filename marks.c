#include <stdio.h>

int main()
{
    float marks1, marks2, marks3, marks4, total, average;

    printf("Enter marks for four subjects: \n");
    scanf("%f %f %f %f", &marks1, &marks2, &marks3, &marks4);

    total = marks1 + marks2 + marks3 + marks4;
    average = total / 4;

    printf("Total Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", average);

    if (average >= 75)
    {
        printf("Grade: Distinction\n");
    }
    else if (average >= 60)
    {
        printf("Grade: First Division\n");
    }
    else if (average >= 50)
    {
        printf("Grade: Second Division\n");
    }
    else if (average >= 40)
    {
        printf("Grade: Third Division\n");
    }
    else
    {
        printf("Grade: Fail\n");
    }

    return 0;
}
