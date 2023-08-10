//divisor
#include<stdio.h>
int main()
{
    int I,N,m,j;
    scanf("%d%d",&N,&m);
    for(I=1; I<=N; I++)
    {
        if(N%I==0)
        {
            if(N>I)
            {
                printf("%d,",I);
            }
            if(N==I)
            {
                printf("%d\n",I);
            }
        }
    }
    for(j=1; j<=m; j++)
    {
        if(m%j==0)
        {
            if(m>j)
            {
                printf("%d,",j);
            }
            if(m==j)
            {
                printf("%d",j);
            }
        }
    }
    return 0;

}
