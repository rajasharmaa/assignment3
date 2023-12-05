#include <stdio.h>

union student {
  int rollno;
  char name[30];
  float marks;
};

int main() {
  union student s1;

  printf("Enter roll number: ");
  scanf("%d", &s1.rollno);

  printf("Enter name: ");
  scanf("%s", s1.name);

  printf("Enter marks: ");
  scanf("%f", &s1.marks);

  printf("\nStudent details:\n");
  printf("Roll number: %d\n",s1.rollno);
  printf("Name: %s\n", s1.name);
  printf("Marks: %f\n", s1.marks);

  return 0;
}