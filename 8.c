#include<stdio.h>

struct student
{
    int rollno;
    char name[20];
    float marks;
};

int main(){
    struct student s1={1,"rajat",80.0};
    struct student *ptr=&s1;

    printf("Roll number:%d\n",ptr->rollno);
    printf("Name:%s\n",ptr->name);
    printf("Marks:%.1f\n",ptr->marks);

    return 0;
}
