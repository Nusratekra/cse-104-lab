#include<stdio.h>
float getArea(float r)
              {
                  return 3.1416*r*r;
              }
int main()
{
    printf("%f",getArea(2.5));
    return 0;
}
