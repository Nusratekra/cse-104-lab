 0#include<stdio.h>
#include<string.h>
int main()
{
    char alp[52];
    int i,vowelCount=0;
    fgets(alp,sizeof(alp),stdin);

    for(i=0; i<strlen(alp); i++)
    {

        char ch= alp[i];

        if(ch=='a'||ch == 'e'||ch == 'i'||ch =='o'||ch == 'u'||ch=='A'||ch == 'E'||ch == 'I'||ch =='O'||ch == 'U')
        {
            vowelCount++;
        }
    }
    printf("%d",vowelCount);
    return 0;
}

