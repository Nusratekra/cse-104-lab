#include<stdio.h>
char checkVowal(char n)
{
    if(n=='A'||n=='E'||n=='I'||n=='O'||n=='U'||n=='a'||n=='e'||n=='i'||n=='o'||n=='u')
    {
        return 1;
    }
    else
    {
        return 0;
    }
    return 0;
}
int main()
{
    char n;
    printf("Character:");
    scanf("%c",&n);
    if(checkVowal(n))
    {
        printf("Vowel");
    }
    else
    {
        printf("consonant");
    }
    return 0;
}
