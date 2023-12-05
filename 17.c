#include<stdio.h>
int main()
{
    auto int i=10;
    {
        auto int i=20;
        printf("\n\t%d",i);
    }
    printf("\n\t%d",i);
    return 0;
}