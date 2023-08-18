#include <stdio.h>
int calculateFactorial (int num)
{
    if ( num == 0 || num == 1)
    {
        return 1;
    }
    return num * calculateFactorial(num-1);
}
int main()
{
    int num;
    printf("n=");
    scanf("%d",&num);
    printf("%d!=%d",num,calculateFactorial(num));
    return 0;
}
