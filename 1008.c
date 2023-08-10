#include<stdio.h>
int main()
{
    int num,hour;
    float amount,SALARY;
    scanf("%d%d%f",&num,&hour,&amount);
    SALARY = hour*amount;
    printf("NUMBER = %d\nSALARY = U$ %0.2f\n",num,SALARY);
    return 0;
}
