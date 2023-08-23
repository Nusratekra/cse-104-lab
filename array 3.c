#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5},i,sum=0;
    for(i=0;i<=5;i++)
    {
        printf("a[i]=%d\n",a[i]);
        sum=sum+a[i];
    }
    printf("sum of arrays value :%d",sum);

}
