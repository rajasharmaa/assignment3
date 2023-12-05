#include<stdio.h>
#include<math.h>

int reverse(int);

int main()
{
    int num,rev;

    printf("Enter any number:");
    scanf("%d",&num);
    rev=reverse(num);

    printf("Reverse of %d=%d",num,rev);

    return 0;
}
int reverse(int x)
{
    int digit=(int)log10(x);

    if(x==0){
        return 0;
    }
    return ((x%10*pow(10,digit))+reverse(x/10));
}
