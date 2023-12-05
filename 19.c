#include <stdio.h>

// Global variable
int x = 10;

int main()
{
  // Local variable
  int y = 20;

  // Print the values of local and global variables
  printf("Local variable y: %d\n", y);
  printf("Global variable x: %d\n", x);

  return 0;
}