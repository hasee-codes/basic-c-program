#include <stdio.h>

int main()
{
    int n, original, remainder, result = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0)
    {
        remainder = n % 10;
        result = result + (remainder * remainder * remainder);
        n = n / 10;
    }

    if (result == original)
        printf("%d is an Armstrong Number", original);
    else
        printf("%d is Not an Armstrong Number", original);

    return 0;
}
