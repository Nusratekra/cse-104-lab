//Information in a Text File:
#include <stdio.h>

int main()
{
    FILE *file;
    char text[100];

    file = fopen("sample.txt", "w");

    if (file == NULL)
    {
        printf("Unable to create the file.\n");
        return 1;
    }

    printf("Enter text to store in the file (Ctrl+D to stop):\n");

    while (fgets(text, sizeof(text), stdin) != NULL)
    {
        fprintf(file, "%s", text);
    }

    printf("Data has been written to the file.\n");
    fclose(file);
}

