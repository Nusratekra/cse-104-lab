//Minimum Number Using a Pointer:
#include <stdio.h>
int main()
{
    int num1, num2;
    int *ptr1, *ptr2;
    scanf("%d %d", &num1, &num2);
    ptr1 = &num1;
    if (*ptr1 < *ptr2)
    {
        printf("Minimum number: %d\n", *ptr1);
    }
    else
    {
        printf("Minimum number: %d\n", *ptr2);
    }
}

