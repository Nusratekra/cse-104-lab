#include<stdio.h>
void printMul(int x)
{
    int i;
    for(i=1;i<11;i++)
    {
        printf("%d*%d=%d\n",x,i,x*i);
    }
}
int main()
{
    int i;
    for(i=1;i<11;i++)
    {
        printMul(i);
        printf("\n");
    }
    return 0;
}

