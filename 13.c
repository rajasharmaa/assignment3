#include<stdio.h>

void square(int n){
    printf("The Square of %d is %d\n",n,n*n);
}
int main()
{
    int number;
    printf("Enter a Number:");
    scanf("%d",&number);
    square(number);
    return 0;
}