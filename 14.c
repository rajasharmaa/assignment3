#include <stdio.h>

// Function to calculate factorial
int factorial();

int main()
{
    int result;

    result = factorial();
    printf("Factorial:%d\n", result);

    return 0;
}
// Function definition to calculate factorial
int factorial()
{
    int n, result = 1;

    // Input the positive number for which factorial needs to be calculated
    printf("Enter a Positive number:");
    scanf("%d", &n);

    // Calculate factorial
    for (int i = 1; i <= n; i++)
    {
        result = result * i;
    }
    return result;
}