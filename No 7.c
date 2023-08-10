//positive,negative,zero
#include <stdio.h>
int main()
{
    double n;
    printf("Enter a number: ");
    scanf("%lf",&n);
    while (1)
    {
        if (n < 0)
        {
            printf("It is negative");
            break;
        }
        else if (n>0)
        {
            printf("It is positive");
            break;
        }
        else
        {
            printf("it is zero");
            break;
        }
    }
    return 0;
}


