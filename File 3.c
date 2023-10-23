//Number of Lines in a Text File:
#include <stdio.h>
int main()
{
    FILE *file;
    char ch;
    int lines = 0;

    file = fopen("sample.txt", "r");

    if (file == NULL)
    {
        printf("Unable to open the file.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF)
    {
        if (ch == '\n')
        {
            lines++;
        }
    }

    printf("Number of lines in the file: %d\n", lines);
    fclose(file);
}


