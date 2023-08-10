//squares and cubes
#include<stdio.h>

int main()
{
    int I,N;
    scanf("%d",&N);
    for(I=1; I<=N; I++)
    {
        printf("square and cube of %d: %d %d\n",I,I*I,I*I*I);
    }
    return 0;

}
