#include <stdio.h>
int add(int, int);
int add(int x, int y)
{
    int sum = 0;
    sum = x + y;

    return sum;
}
int main()
{
    int num1, num2, sum = 0;
    printf("Enter Two number's");
    scanf("%d%d", &num1, &num2);
    sum = add(num1, num2);
    printf("Result:%d", sum);
}