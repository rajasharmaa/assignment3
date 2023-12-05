#include<stdio.h>

int main()
{
    char ch[]={"Rajat Sharma BCA 1sem"};
    FILE *fp;
    int i;

    fp=fopen("r.text","w");

    for(i=0;ch[i]!='\0';i++)
    {
        fputc(ch[i],fp);
    
    }
    fclose(fp);

    return 0;
}