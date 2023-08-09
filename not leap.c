#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(((i%400==0)||((i%100!=0)&&(i%4==0)))==0)
        {
            printf("%d\n",i);

        }
    }
    return 0;
}
