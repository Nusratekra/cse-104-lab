//sum of every second odd
#include<stdio.h>

int main()
{
    int i,N,sum=0;
    scanf("%d",&N);
    for(i=3;i<=N;i+=4)
    {
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}


