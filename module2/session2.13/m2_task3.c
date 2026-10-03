#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 100  

main() {
	int i;
    FILE *file;
    char song[MAX_LEN];

    file = fopen("playlist.txt", "a");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }
    printf("Enter two song names to add to playlist.txt:\n");

    for ( i = 0; i < 2; i++) {
        printf("Song %d: ", i + 1);

        if (fgets(song, sizeof(song), stdin) == NULL) {
            printf("Error reading input.\n");
            fclose(file);
        }
        song[strcspn(song, "\n")] = '\0';
        fprintf(file, "%s\n", song);
    }
	fclose(file);
    printf("Songs added successfully to playlist.txt\n");

}

