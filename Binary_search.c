#include <stdio.h>

int main()
{
    int numbers[100], n, i, search;
    int low, high, mid, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers in sorted order:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &search);

    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (numbers[mid] == search)
        {
            printf("Number found at position %d", mid + 1);
            found = 1;
            break;
        }
        else if (numbers[mid] < search)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (found == 0)
    {
        printf("Number not found");
    }

    return 0;
}
