/*WAP to read and print an employee's detail using structure. */
#include<stdio.h>
#include<conio.h>


struct employee
{
    char name[50];
    int empId;
    int age;
    float salary;
}emp;

int main()
{
    printf("\n Enter employee details!\n");
    printf("\nName:");
    gets(emp.name);
    printf("\nID:");
    scanf("%d",&emp.empId);
    printf("\nAge:");
    scanf("%d",&emp.age);
    printf("\nSalary:");
    scanf("%f",&emp.salary);


    printf("\nEntered employee detail are!");
    printf("\nName:%s",emp.name);
    printf("\nId:%d",emp.empId);
    printf("\nAge:%d",emp.age);
    printf("\nSalary:%f\n",emp.salary);

    return 0;
}
