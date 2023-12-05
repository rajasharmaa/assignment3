#include<stdio.h>

int main()
{
    char filename[100];

    printf("Enter the name of the file to be deleted:");
    scanf("%s",filename);

    int result = remove(filename);

    if(result==0)
    {
        printf("The file %s was deleted succcessfully.\n",filename);
    }else{
        printf("Error deleting the file %s.\n",filename);
    }
    return 0;
}