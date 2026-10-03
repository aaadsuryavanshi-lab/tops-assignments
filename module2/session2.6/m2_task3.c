#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

main() {
    
    const char *songs[] = {
        "Shape of You",
        "Blinding Lights",
        "Levitating"
    };
    int totalSongs = sizeof(songs) / sizeof(songs[0]);

    srand(time(NULL));
    int randomIndex = rand() % totalSongs;

    char guess[100];
    int correct = 0;
    int i;

    printf("Welcome to Guess the Song!\n");
    printf("Hint: The song is one of these:\n");
    for ( i = 0; i < totalSongs; i++) {
        printf(" - %s\n", songs[i]);
    }

    do {
        printf("\nEnter your guess: ");
        fgets(guess, sizeof(guess), stdin);

        guess[strcspn(guess, "\n")] = '\0';

        if (strcmp(guess, songs[randomIndex]) == 0) {
            printf(" Correct! The song was \"%s\".\n", songs[randomIndex]);
            correct = 1;
        } else {
            printf(" Wrong guess! Try again.");
        }
    } while (!correct);
    
	return 0;
}

