#include<stdio.h>
float getArea(float r)
{
    return 3.1416*r*r;
}
void getVolume(float r)
{
    printf("%f",(4*getArea(r)*r)/3);
}
int main()
{
    getVolume(2);

    return 0;
}

