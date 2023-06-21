#include <stdio.h>
#include <stdlib.h>

int main() {
    char source_file[100], target_file[100];
    printf("Enter the name of the source file: ");
    scanf("%s", source_file);
    printf("Enter the name of the target file: ");
    scanf("%s", target_file);

    FILE *source = fopen(source_file, "r");
    if (source == NULL) {
        printf("Error opening source file.\n");
        exit(1);
    }

    FILE *target = fopen(target_file, "w");
    if (target == NULL) {
        printf("Error opening target file.\n");
        exit(1);
    }

    char ch;
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, target);
    }

    printf("File copied successfully.\n");

    fclose(source);
    fclose(target);

    return 0;
}