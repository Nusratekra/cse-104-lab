#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)//row
    {
        for(j=1;j<=i;j++)//col
        {
            printf("-");
            }
         for(j=5;j>=i;j--)
         {
             printf("*");
         }


        printf("\n");
        }
        return 0;

    }



