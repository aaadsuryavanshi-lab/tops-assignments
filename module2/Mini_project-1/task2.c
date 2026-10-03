#include <stdio.h>

main() {
    int musicMinutes[7] = {0};  
    int choice, total, i;

    do {
        printf("\n=== Music Listening Logger ===\n");
        printf("1. Log new listening minutes\n");
        printf("2. View weekly summary\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                total = 0;
                for (i = 0; i < 7; i++) {
                    printf("Enter minutes of music listened on Day %d: ", i + 1);
                    scanf("%d", &musicMinutes[i]);
                }
                printf("Data logged successfully!\n");
                break;

            case 2:
                total = 0;
                printf("\n--- Weekly Music Report ---\n");
                for (i = 0; i < 7; i++) {
                    printf("Day %d: %d minutes\n", i + 1, musicMinutes[i]);
                    total += musicMinutes[i];
                }
                printf("Total minutes listened: %d\n", total);
                printf("Average per day: %.2f minutes\n", total / 7.0);
                break;

            case 3:
                printf("Exiting the Music Listening Logger. Goodbye!\n");
                break;
                
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);
}

