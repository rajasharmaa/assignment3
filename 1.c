/*WAP to Swapping the values of the two variables using call by value. */
#include <stdio.h>
void swap(int a, int b)
{

    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("Values After swap:");
    printf("%d\n", a);
    printf("%d\n", b);
}
int main()
{
    int first, second;
    scanf("%d %d", &first, &second);

    printf("Values before swap:");
    printf("%d\n", first);
    printf("%d \n", second);

    swap(first, second);

    return 0;
}