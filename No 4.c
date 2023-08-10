//harmonic series
#include <stdio.h>
int main()
{
    int i,n,j,m,k=1;
    scanf("%d%d",&n,&m);
    printf("%d+",k);
    for(i=2; i<=n; i++)
    {
        if(i<n)
        {
            printf("1/%d+",i);
        }
        if(i==n)
        {
            printf("1/%d\n",i);
        }
    }
    printf("%d+",k);
    for(j=2; j<=m; j++)
    {
        if(j<m)
        {
            printf("1/%d+",i);
        }
        if(j==m)
        {
            printf("1/%d",i);
        }
    }
    return 0;
}



