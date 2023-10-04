#include<stdio.h>
#include<string.h>
int main()
{
    char str1[] = "hello";
     char str2[] = "World";


     strncpy(str1,str2,2);
     puts(str1);
}



