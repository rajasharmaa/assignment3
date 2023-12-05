/*WAP to illustrate the strlen() and strcpy() string function. */
#include<stdio.h>
#include<string.h>

int main()
{
    char str1[]="Hello, world!";
    char str2[100];

    //print the Length of the string str1

    printf("Length of str1: %d\n",strlen(str1));

    // Copy the string str1 to the string str2
    strcpy(str2,str1);

    //print the string str2
    printf("str2: %s\n",str2);
}