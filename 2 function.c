#include <stdio.h>
int prime(int n)
{
    int i;
    for(i=2; i<=n/2; i++)
    {
        if(n%i!=0)
            continue;
        else
            return 1;
    }
    return 0;
}
int main()
{
    int num,res=0;
    printf("n=");
    scanf("%d",&num);
    res=prime(num);
    if(res==0)
        printf("Prime");
    else
        printf("not a Prime");
    return 0;
}

