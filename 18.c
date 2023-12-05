#include<stdio.h>
int main()
{
    int i;
    void incre(void);

    for(i=0;i<3;i++)
    incre();
    return 0;
}
void incre(void)
{
    int avar=1;
    static int svar=1;
    avar++;
    svar++;
    printf("\n\nAutomatic variable value:%d",avar);
    printf("\tStatic variable value:%d",svar);
}
