#include<stdio.h>
int main()
{
    int i,j,k=1;
    for(i=1;i<=5;i++)//row
    {
        for(j=1;j<=i;j++)//col
        {
            printf("%3d",k);
            k++;
        }
        printf("\n");

    }
}

