#include <stdio.h>

int main()
{
    int numbers[100], n, i, search, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &search);

    for (i = 0; i < n; i++)
    {
        if (numbers[i] == search)
        {
            printf("Number found at position %d", i + 1);
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("Number not found");
    }

    return 0;
}
