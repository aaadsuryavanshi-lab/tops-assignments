#include <stdio.h>
#include <string.h>

void formatFollowersCount(long count, char *buffer, size_t bufferSize) {
    if (buffer == NULL || bufferSize == 0) {
    }
    if (count < 0) {
        snprintf(buffer, bufferSize, "Invalid"); 
    }
    if (count < 1000) {
        snprintf(buffer, bufferSize, "%ld", count);
    }
    else if (count < 1000000) {
        double value = count / 1000.0;
        snprintf(buffer, bufferSize, "%.1fK", value);
    }
    else {
        double value = count / 1000000.0;
        snprintf(buffer, bufferSize, "%.1fM", value);
    }
}
main() {
    char formatted[20]; 
    long testCounts[] = {999, 1500, 1200000, 500000, 0, -50};
    int numTests = sizeof(testCounts) / sizeof(testCounts[0]), i;

    for ( i = 0; i < numTests; i++) {
        formatFollowersCount(testCounts[i], formatted, sizeof(formatted));
        printf("Count: %ld -> %s\n", testCounts[i], formatted);
    }
}

