#include <stdio.h>

int main()
{
    int rollNo[50], marks[50];
    char name[50][50];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &rollNo[i]);

        printf("Name: ");
        scanf("%s", name[i]);

        printf("Marks: ");
        scanf("%d", &marks[i]);
    }

    printf("\n--- Student Details ---\n");

    for (i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number = %d\n", rollNo[i]);
        printf("Name = %s\n", name[i]);
        printf("Marks = %d\n", marks[i]);
    }

    return 0;
}
