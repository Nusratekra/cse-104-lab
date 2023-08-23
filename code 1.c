#include<stdio.h>
float input_amount()
{
    printf("plase enter the amount:\n");
    float amt;
    scanf("%f",&amt);
    return amt;
}
float conver_to_eur(float amt)
{
    return amt*0.85;
}
float conver_to_gdp(float amt)
{
    return amt*0.73;
}
int main()
{
    float a;
    a=input_amount();
    printf("%f",a);
    printf("%f",conver_to_eur(a));
           printf("%f",conver_to_gdp(a));
}
