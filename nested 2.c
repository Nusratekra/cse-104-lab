#include<stdio.h>
int main()
{
    int i,j,count=1;
    for(i=1;i<=4;i++)//row
    {
        for(j=1;j<=count;j+=1)//col
        {
            printf("*");
        }
        printf("\n");
        count++;
}
return 0;}

