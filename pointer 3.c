#include <stdio.h>
int main()
{
    int num, factorial = 1;
    int *ptr;
    scanf("%d", &num);
    ptr = &num;
    for (int i = 1; i <= *ptr; i++)
    {
        factorial *= i;
    }
    printf("Factorial of %d is: %d\n", *ptr, factorial);
}

