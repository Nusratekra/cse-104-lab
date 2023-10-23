//Existing File:
#include <stdio.h>
int main()
{
    FILE *file;
    char text[100];

    file = fopen("sample.txt", "r");

    if (file == NULL)
    {
        printf("Unable to open the file.\n");
        return 1;
    }

    printf("Contents of the file:\n");

    while (fgets(text, sizeof(text), file) != NULL)
    {
        printf("%s", text);
    }

    fclose(file);

}

