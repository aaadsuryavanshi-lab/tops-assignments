#include <stdio.h>

main(){
    float hours[DAYS];
    float total = 0.0f;
    int maxDay = 0;
    float maxHours = -1.0f;

    // Input loop with validation
    for (int i = 0; i < DAYS; i++) {
        float input;
        while (1) {
            printf("Enter study hours for Day %d (0-24): ", i + 1);
            if (scanf("%f", &input) != 1) {
                // Clear invalid input
                while (getchar() != '\n');
                printf("Invalid input. Please enter a number.\n");
                continue;
            }
            if (input < 0 || input > 24) {
                printf("Invalid hours. Must be between 0 and 24.\n");
                continue;
            }
            break; // Valid input
        }
        hours[i] = input;
        total += input;

        // Track max
        if (input > maxHours) {
            maxHours = input;
            maxDay = i;
        }
    }

    // Calculate average
    float average = total / DAYS;

    // Output results
    printf("\nWeekly Total Hours: %.2f\n", total);
    printf("Daily Average Hours: %.2f\n", average);
    printf("Day with Highest Hours: Day %d (%.2f hours)\n", maxDay + 1, maxHours);

    // Visual bar chart
    printf("\nStudy Hours Chart:\n");
    for (int i = 0; i < DAYS; i++) {
        printf("Day %d: ", i + 1);
        int stars = (int)hours[i]; // Truncate to integer
        for (int j = 0; j < stars; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

