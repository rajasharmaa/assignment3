/*WAP to Swapping the values of the two variables using call by referance.*/
#include<stdio.h>

void swap(int *num1,int *num2);

int main()
{
    int num1,num2;

    printf("Enter two Numbers:");
    scanf("%d%d",&num1,&num2);

    printf("Befor swapping in main");
    printf("Value of num1=%d\n",num1);
    printf("Value of num2 = %d\n\n",num2);
    swap(&num1,&num2);

    return 0;
}
void swap(int *num1,int *num2)
{
    int temp;

    temp=*num1;
    *num1=*num2;
    *num2=temp;

    printf("After swapping in swap function");
    printf("Value of num1=%d\n",*num1);
    printf("Value of num2 =%d\n\n",*num2);

}