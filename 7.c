/*WAP to demonstrate example of nested structure. */
#include <stdio.h>
#include <string.h>

struct employee
{
    int id;
    char name[20];
    struct date
    {
        int dd;
        int mm;
        int yyyy;
    } doj;
};

int main()
{
    struct employee e1;

    e1.id = 101;
    strcpy(e1.name, "Rajat sharma");
    e1.doj.dd = 10;
    e1.doj.mm = 11;
    e1.doj.yyyy = 2023;

    printf("Employee id:%d\n", e1.id);
    printf("Employee name:%s\n", e1.name);
    printf("Employee date of joining (dd/mm/yyy):%d/%d/%d\n", e1.doj.dd,
           e1.doj.mm, e1.doj.yyyy);

    return 0;
}
