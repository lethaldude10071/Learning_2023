#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void copyFile(FILE *sourceFile, FILE *targetFile, char option) {
    char ch;
    while ((ch = fgetc(sourceFile)) != EOF) {
        if (option == '-u') {
            ch = toupper(ch);
        } else if (option == '-l') {
            ch = tolower(ch);
        } else if (option == '-s') {
            if (islower(ch)) {
                ch = toupper(ch);
            }
        }
        fputc(ch, targetFile);
    }
}

int main() {
    FILE *sourceFile, *targetFile;
    char sourceFileName[20], targetFileName[20], option;

    printf("Enter name of file to copy\n");
    scanf("%s", sourceFileName);

    printf("Enter name of target file\n");
    scanf("%s", targetFileName);

    printf("Enter option u for upper case, l for lower case and s for purely upper case\n");
    scanf(" %c", &option);

    sourceFile = fopen(sourceFileName, "r");

    if (sourceFile == NULL) {
        printf("Unable to open source file %s\n", sourceFileName);
        exit(EXIT_FAILURE);
    }

    targetFile = fopen(targetFileName, "w");

    if (targetFile == NULL) {
        fclose(sourceFile);
        printf("Unable to open target file %s\n", targetFileName);
        exit(EXIT_FAILURE);
    }

    copyFile(sourceFile, targetFile, option);

    printf("\nFiles copied successfully.\n");

    fclose(sourceFile);
    fclose(targetFile);

    return 0;
}
