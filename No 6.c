//hally's comet
#include <stdio.h>
int main()
{
    int i=1,N,j=1,m;
    scanf("%d%d",&N,&m);
    while(i<=N)
    {
        if(i%200==0)
        {
            printf("%d\n",i);
        }
        if(N<200)
        {
            printf("Has not been observed yet\n");
            break;
        }
        i++;
    }
    while(j<=m)
    {
        if(j%200==0)
        {
            printf("%d\n",j);
        }
        if(m<200)
        {
            printf("Has not been observed yet");
            break;
        }
        j++;
    }
    return 0;
}


