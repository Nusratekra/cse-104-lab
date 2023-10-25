#include<stdio.h>
unsigned long long factorial(int n)
{
    if(n== 0||n==1)
       {
           return 1;
       }
       else{
        return n*factorial(n-1);
       }
}
int main()
{
    int n=5;
    printf("Factorial of %d is %llu\n",n,factorial(n));
}
