#include <stdio.h>

main() {
    int musicMinutes[7], total = 0,i;

    printf("=== Music Listening Logger ===\n");

    for (i = 0; i < 7; i++) {
        printf("Enter minutes of music listened on Day %d: ", i + 1);
        scanf("%d", &musicMinutes[i]);
        total += musicMinutes[i];
    }
    printf("\n--- Weekly Music Report ---\n");
    for (i = 0; i < 7; i++) {
        printf("Day %d: %d minutes\n", i + 1, musicMinutes[i]);
    }
    printf("Total minutes listened: %d\n", total);
    printf("Average per day: %.2f minutes\n", total / 7.0);
}

