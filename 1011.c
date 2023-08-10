#include<stdio.h>
#include<math.h>
int main()
{
    int R;
    double VOLUME;
    scanf("%d",&R);
    VOLUME = (4*3.14159*pow(R,3))/3;
    printf("VOLUME = %.3lf\n",VOLUME);
    return 0;
}
