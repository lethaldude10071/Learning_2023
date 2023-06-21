#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct LogEntry {
    int entryNo;
    char sensorNo[10];
    float temperature;
    int humidity;
    int light;
    char time[20];
};

void display_entry(struct LogEntry *entry) {
    printf("Entry No: %d, Sensor No: %s, Temperature: %.1f, Humidity: %d%%, Light: %d, Time: %s\n", entry->entryNo, entry->sensorNo, entry->temperature, entry->humidity, entry->light, entry->time);
}

int main() {
    char filename[100];
    printf("Enter the name of the CSV file: ");
    scanf("%s", filename);

    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    struct LogEntry entries[100];
    int n = 0;

    char line[1024];
    fgets(line, sizeof(line), file); // skip header line
    while (fgets(line, sizeof(line), file)) {
        sscanf(line, "%d,%[^,],%f,%d,%d,%s", &entries[n].entryNo, entries[n].sensorNo, &entries[n].temperature, &entries[n].humidity, &entries[n].light, entries[n].time);
        n++;
    }

    printf("Log Entries:\n");
    for (int i = 0; i < n; i++) {
        printf("Entry No: %d, Sensor No: %s, Temperature: %.1f, Humidity: %d%%, Light: %d, Time: %s\n", entries[i].entryNo, entries[i].sensorNo, entries[i].temperature, entries[i].humidity, entries[i].light, entries[i].time);
    }

    int entryNo;
    printf("Enter the entry number to display: ");
    scanf("%d", &entryNo);

    for (int i = 0; i < n; i++) {
        if (entries[i].entryNo == entryNo) {
            printf("Log Entry:\n");
            display_entry(&entries[i]);
            break;
        }
    }

    fclose(file);

    return 0;
}
