#include<stdio.h>
void add();//Function Declaration

void main()
{
    add();//Function Calling
}
void add()
{
    //Function Definition
    int num1,num2,sum=0;
    printf("Enter two no's");
    scanf("%d%d",&num1,&num2);
    sum=num1+num2;
    printf("Result is:%d",sum);
}