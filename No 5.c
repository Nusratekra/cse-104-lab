//leap year  from 1 to N while loop
#include <stdio.h>
int main()
{
    int i=1,N;
    scanf("%d",&N);
    printf("enter the year=%d\n",N);
    while(i<=N)
    {
        if((i%400==0)||((i%100!=0)&&(i%4==0)))
        {
            printf("%d\t",i);
        }
        i++;
    }

    return 0;
}

