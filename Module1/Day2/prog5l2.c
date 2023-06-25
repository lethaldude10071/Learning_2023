#include <stdio.h>
#include <string.h>

void encode(char *s) {
    for (int i = 0; i < strlen(s); i++) {
        s[i] += 1;
    }
}

void decode(char *s) {
    for (int i = 0; i < strlen(s); i++) {
        s[i] -= 1;
    }
}

int main() {
    char s[] = "Hello World!";
    encode(s);
    printf("%s\n", s); 

    decode(s);
    printf("%s\n", s); 

    return 0;
}
