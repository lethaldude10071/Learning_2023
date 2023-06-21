#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename[100];
    printf("Enter the name of the CSV file: ");
    scanf("%s", filename);

    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    char ch;
    while ((ch = fgetc(file)) != EOF) {
        if (ch == ',') {
            printf(" ");
        } else if (ch == '\n') {
            printf("\n");
        } else {
            printf("%c", ch);
        }
    }

    fclose(file);

    return 0;
}