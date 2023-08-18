#include<stdio.h>

void printEven(int n)
{
    for(int i=1; i<=2*n; i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
}

int main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    printEven(n);
    return 0;
}

