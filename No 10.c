//nested loop
#include <stdio.h>
int main()
{
    int n,i,j,k=1;
    scanf("%d",&n);
    for (i=1; i<=n; i++)
    {
        for(j=k; j>=1; j/=2)
        {
            printf("%d ",j);
        }
        k*=2;
        printf("\n");
    }

    return 0;
}
