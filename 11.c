#include<stdio.h>

union r1
{
    int a;
    float b;
    char c;
};
int main()
{
    union r1 r1;

    printf("The size of the union is %d bytes.\n",sizeof(r1));
}
