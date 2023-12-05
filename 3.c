/*WAP to illustrate the strcat() and strcmp() string function. */
#include<stdio.h>
#include<string.h>

int main()
{
    char str1[]="Hello";
    char str2[]="world";
    char str3[50];

    //compare the two strings
    strcat(str3,str1);
    strcat(str3," ");
    strcat(str3,str2);

    //compare the two strings
    int result = strcmp(str1,str2);

    //print the results
    printf("The concatenated string is:%s\n",str3);
    printf("The result of the comparison is:%d\n",result);
}