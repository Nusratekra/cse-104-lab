#include<stdio.h>
int isPrime(int n)
{
    if(n==1)
    {
        return 0;
    }
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
void nthPrime(int n)
{
    int count = 0;
    int start = 2;
    while (1)
    {
        if (isPrime(start))
        {
            count++;
            if (count == n)
            {
                printf("%dth prime is %d\n",n, start);
                return;
            }
        }
        start++;
    }

}
void printallPrime(int x,int y)
{

    for(int j=x; j<=y; j++)
    {
        if(isPrime(j))
        {
            printf("%d ",j);
        }
    }
}
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    printf("Enter the start of the range: %d\nEnter the end of the range: %d\nPrime numbers in the range %d to %d are:\n",x,y,x,y);
    printallPrime(x,y);

}
