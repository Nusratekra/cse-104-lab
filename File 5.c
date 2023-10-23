//Copy a File to Another File:
#include <stdio.h>

int main()
{
    FILE *sourceFile, *destFile;
    char ch;

    sourceFile = fopen("source.txt", "r");
    destFile = fopen("destination.txt", "w");

    if (sourceFile == NULL || destFile == NULL)
    {
        printf("Unable to open the file(s).\n");
        return 1;
    }

    while ((ch = fgetc(sourceFile)) != EOF)
    {
        fputc(ch, destFile);
    }

    printf("File copied successfully.\n");

    fclose(sourceFile);
    fclose(destFile);
}

