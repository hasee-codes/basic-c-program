#include <stdio.h>

int main()
{
    int marks[5], i, total = 0;
    float average;

    printf("Enter marks for 5 subjects:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
        total = total + marks[i];
    }

    average = total / 5.0;

    printf("\nTotal = %d", total);
    printf("\nAverage = %.2f", average);

    if (average >= 90)
        printf("\nGrade = A+");
    else if (average >= 80)
        printf("\nGrade = A");
    else if (average >= 70)
        printf("\nGrade = B");
    else if (average >= 60)
        printf("\nGrade = C");
    else if (average >= 50)
        printf("\nGrade = D");
    else
        printf("\nGrade = F");

    return 0;
}
