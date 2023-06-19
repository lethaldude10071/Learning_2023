#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char time[9];
    int hours, minutes, seconds;
    printf("Enter time in 24 hour format (hh:mm:ss): ");
    scanf("%s", time);
    if (strlen(time) != 8 || time[2] != ':' || time[5] != ':') {
        printf("Invalid input format\n");
        return 1;
    }
    for (int i = 0; i < 8; i++) {
        if (i == 2 || i == 5) {
            continue;
        }
        if (!isdigit(time[i])) {
            printf("Invalid input format\n");
            return 1;
        }
    }
    sscanf(time, "%d:%d:%d", &hours, &minutes, &seconds);
    int total_seconds = hours * 3600 + minutes * 60 + seconds;
    printf("Total seconds: %d", total_seconds);
    return 0;
}