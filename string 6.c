#include<stdio.h>
#include<string.h>
int main()
{
    char str1[] = "Hello";
    char str2[] = "World";
    char str3[]="pn";
    strncpy(str3,str1,2);
//puts(str3);
    strncat(str3,str2,2);
    puts(str3);

}
