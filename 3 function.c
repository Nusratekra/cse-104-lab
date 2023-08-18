#include<stdio.h>
void fibonacciSeries(int n)
{
    int a=0, b=1, c;
    for(int i=0; i<n; i++)
    {
        printf("%d\t", a);
        c = a+b;
        a = b;
        b = c;
    }
}

int main()
{
    int t;
    printf("Enter the n=");
    scanf("%d", &t);
    printf("The Fibonacci series:");
    fibonacciSeries(t);
    return 0;
}
