#include<stdio.h>
int a,b;
void swap()
{
    int t;
    t = a;
    a = b;
    b=t;
}

int main()
{
     a = 5,b = 10;
    printf("before : %d %d\n",a,b);
    swap();
    printf("before:%d %d\n",a,b);
}
