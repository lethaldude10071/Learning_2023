#include <stdio.h>
#include <string.h>

int main() {
    char *names[] = {
        "Santosh", "Amol", "Santosh Jain", "Kishore", "Rahul", "Amolkumar", "Hemant"
    };
    int n = sizeof(names)/sizeof(names[0]);

    // Sort the names using bubble sort
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (strcmp(names[j], names[j+1]) > 0) {
                char *temp = names[j];
                names[j] = names[j+1];
                names[j+1] = temp;
            }
        }
    }

    // Print the sorted names
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
