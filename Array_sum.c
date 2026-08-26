#include <stdio.h>

int main()
{
    int numbers[100], n, i, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
        sum = sum + numbers[i];
    }

    printf("Sum = %d", sum);

    return 0;
}
