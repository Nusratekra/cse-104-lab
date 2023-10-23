//Characters in a File:
#include <stdio.h>
int main() {
    FILE *file;
    char ch;
    int charCount = 0;

    file = fopen("sample.txt", "r");

    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        charCount++;
    }

    printf("Number of characters in the file: %d\n", charCount);
    fclose(file);
}


