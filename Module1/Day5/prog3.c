#include <stdio.h>

typedef struct {
    int hours;
    int minutes;
    int seconds;
} time;

time readTime() {
    time t;
    int valid = 0;

    while (!valid) {
        printf("Enter hours, minutes, and seconds: ");
        scanf("%d %d %d", &t.hours, &t.minutes, &t.seconds);

        if (t.hours >= 0 && t.hours <= 23 && t.minutes >= 0 && t.minutes <= 59 && t.seconds >= 0 && t.seconds <= 59) {
            valid = 1;
        } else {
            printf("Invalid time. Please try again.\n");
        }
    }

    return t;
}

void writeTime(time t) {
    printf("%02d:%02d:%02d\n", t.hours, t.minutes, t.seconds);
}

time diffTime(time t1, time t2) {
    time result;

    // Convert both times to seconds
    int seconds1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    int seconds2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;

    // Calculate the difference in seconds
    int diff = seconds2 - seconds1;

    // Convert the difference back to hours, minutes, and seconds
    result.hours = diff / 3600;
    diff %= 3600;
    result.minutes = diff / 60;
    result.seconds = diff % 60;

    return result;
}

int main() {
    time t1, t2, difference;

    printf("First time:\n");
    t1 = readTime();
    printf("Second time:\n");
    t2 = readTime();

    difference = diffTime(t1, t2);

    printf("Difference: ");
    writeTime(difference);

    return 0;
}