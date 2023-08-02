#include<stdio.h>
int main()
{
    int i=0;
    for(; ;)
    {
        printf("%d\n",i);
        i=i+2;
        if(i>50)
        {
            break;
        }
    }
}
