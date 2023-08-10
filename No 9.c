//multiplier
#include<stdio.h>
int main()
{
    int i=1,j,n,k;
    scanf("%d%d",&n,&j);
    k=i*n;
    do
    {
        printf("%d No multiplier of %d: %d\n",i,n,k);
        i++;
        k+=n;
    }
    while(i<=(n-1),k<=j);
    return 0;
}
