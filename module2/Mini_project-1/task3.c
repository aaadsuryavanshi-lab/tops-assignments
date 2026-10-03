#include <stdio.h>

main() {
    int musicMinutes[7] = {0};  
    int choice, total, i;
    FILE *file;

    do {
        printf("\n=== Music Listening Logger ===\n");
        printf("1. Log new listening minutes\n");
        printf("2. View weekly summary\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                file = fopen("music_log.txt", "w"); 
                if (file == NULL) {
                    printf("Error opening file!\n");
                    break;
                }
                for (i = 0; i < 7; i++) {
                    printf("Enter minutes of music listened on Day %d: ", i + 1);
                    scanf("%d", &musicMinutes[i]);
                    fprintf(file, "%d\n", musicMinutes[i]);  // Save to file
                }
                fclose(file);
                printf("Data logged and saved to music_log.txt successfully!\n");
                break;

            case 2:
                file = fopen("music_log.txt", "r");  // Open file for reading
                if (file == NULL) {
                    printf("No log file found. Please log your minutes first.\n");
                    break;
                }
                total = 0;
                printf("\n--- Weekly Music Report ---\n");
                for (i = 0; i < 7; i++) {
                    fscanf(file, "%d", &musicMinutes[i]);
                    printf("Day %d: %d minutes\n", i + 1, musicMinutes[i]);
                    total += musicMinutes[i];
                }
                fclose(file);
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

    return 0;
}   
