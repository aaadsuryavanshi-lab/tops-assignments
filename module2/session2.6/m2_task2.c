#include <stdio.h>
#include <string.h>

#define MAX_TEAMS 100
#define NAME_LEN 50

main() {
	int i;
    char teams[MAX_TEAMS][NAME_LEN] = {
        "Mumbai Indians",
        "Chennai Super Kings",
        "Royal Challengers Bangalore"
    };
    int teamCount = 3;
    int choice;

    while (1) {
        printf("\n=== IPL Teams Menu ===\n");
        printf("1. View Favorite Teams\n");
        printf("2. Add a New Team\n");
        printf("3. Exit\n");
        printf("Enter your choice (1-3): ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n'); // clear input buffer
            continue;
        }

        if (choice == 1) {
            printf("\nYour Favorite IPL Teams:\n");
            for (i = 0; i < teamCount; i++) {
                printf("%d. %s\n", i + 1, teams[i]);
            }
        }
        else if (choice == 2) {
            if (teamCount >= MAX_TEAMS) {
                printf("Team list is full! Cannot add more.\n");
                continue;
            }
            printf("Enter new team name: ");
            while (getchar() != '\n'); 
            if (fgets(teams[teamCount], NAME_LEN, stdin) != NULL) {
                
                size_t len = strlen(teams[teamCount]);
                if (len > 0 && teams[teamCount][len - 1] == '\n') {
                    teams[teamCount][len - 1] = '\0';
                }
                teamCount++;
                printf("Team added successfully!\n");
            }
        }
        else if (choice == 3) {
            printf("Exiting program. Goodbye!\n");
            break;
        }
        else {
            printf("Invalid choice! Please select 1, 2, or 3.\n");
        }
    }
}

