//Multiply Two Numbers Using a Pointer:
#include <stdio.h>
int main()
{
    int num1, num2, result;
    int *ptr1, *ptr2;
    scanf("%d %d", &num1, &num2);
    ptr1 = &num1;
    ptr2 = &num2;
    result = (*ptr1) * (*ptr2);
    printf("Multiplication : %d\n", result);
}
