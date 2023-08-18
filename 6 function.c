#include<stdio.h>
int getArea(int B,int H)
{
    return B*H*0.5;
}
int main()
{
    int B,H;
    scanf("%d%d",&B,&H);
    printf("Area =%d",getArea(B,H));
    return 0;
}

