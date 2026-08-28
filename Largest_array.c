#include <stdio.h>

int main()
{
    int numbers[100], n, i, largest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    largest = numbers[0];

    for (i = 1; i < n; i++)
    {
        if (numbers[i] > largest)
        {
            largest = numbers[i];
        }
    }

    printf("Largest element = %d", largest);

    return 0;
}
