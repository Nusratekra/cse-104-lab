//age
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (1)
    {
        if (n<= 3)
        {
            printf("Toddler");
            break;
        }
        else if (n<=9)
        {
            printf("Child");
            break;
        }
        else if (n<=12)
        {
            printf("Tween");
            break;
        }
        else if(n<=19)
    {
        printf("Teen");
            break;}
        else if(n<=24)
    {
        printf("Young Adult");
            break;
        }
        else
        {
            printf("Adult");
            break;
        }
    }
    return 0;
}


