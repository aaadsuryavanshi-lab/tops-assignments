#include <stdio.h>

int main() {
    int musicMinutes[7] = {0}, choice, i, total, highest, confirm;
    FILE *file;
    do {
        printf("\n=== Music Listening Logger ===\n");
        printf("1. Log minutes\n2. Weekly report\n3. Reset data\n4. Exit\nChoice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            file = fopen("music_log.txt", "w");
            for (i = 0; i < 7; i++) {
                printf("Day %d minutes: ", i + 1);
                scanf("%d", &musicMinutes[i]);
                fprintf(file, "%d\n", musicMinutes[i]);
            }
            fclose(file);
            printf("Data saved!\n");
        } 
        else if (choice == 2) {
            file = fopen("music_log.txt", "r");
            if (!file) { printf("No log found.\n"); continue; }
            total = highest = 0;
            for (i = 0; i < 7; i++) {
                fscanf(file, "%d", &musicMinutes[i]);
                printf("Day %d: %d\n", i + 1, musicMinutes[i]);
                total += musicMinutes[i];
                if (musicMinutes[i] > highest) highest = musicMinutes[i];
            }
            fclose(file);
            printf("Total: %d\nAverage: %.2f\nHighest: %d\n", total, total/7.0, highest);
        }
        else if (choice == 3) {
            printf("Are you sure you want to reset data? (1=Yes, 0=No): ");
            scanf("%d", &confirm);
            if (confirm == 1) {
                for (i = 0; i < 7; i++) musicMinutes[i] = 0;
                file = fopen("music_log.txt", "w");
                if (file) fclose(file);  
                printf("Data reset successfully!\n");
            } 
			else {
                printf("Reset cancelled.\n");
            }
        }
    } while (choice != 4);
    printf("Goodbye!\n");

}
