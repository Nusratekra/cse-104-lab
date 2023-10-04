#include<stdio.h>
#include<string.h>
int main()
{
    char str[] = "Hello World";
    printf("%d\n",strlen(str));
    puts(strupr(str));
    strlwr(str);
    puts(str);
}

