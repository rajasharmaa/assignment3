#include <stdio.h>

struct emp_info
{
    int emp_id;
    char nm[50];
} emp[2];
void main()
{
    int i;
    for (i = 0; i < 2; i++)
    {
        printf("\n\n\tEnter Employee ID:");
        scanf("%d", &emp[i].emp_id);
        printf("\n\n\tEmployee Name:");
        scanf("%s", emp[i].nm);
    }
    for (i = 0; i < 2; i++)
    {
        printf("\n\tEmployee ID:%d", emp[i].emp_id);
        printf("\n\tEmployee Name:%s", emp[i].nm);
    }
}