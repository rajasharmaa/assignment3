/*WAP to illustrate the strupr() and strlwr() string function. */
#include<stdio.h>
#include<string.h>

int main()
{
    char str1[]="Hello, world";
    char str2[]="HELLO , world";

    printf("Original string 1: %s\n",str1);
     printf("Original string 2: %s\n",str2);


     // convert string 1 to uppercase
     strupr(str1);

     //Convert string 2 to Lowercase
     strlwr(str2);

     printf("String 1 after converting to uppercase:%s\n",str1);
     printf("String 2 after converting to uppercase:%s\n",str2);

     return 0;
}