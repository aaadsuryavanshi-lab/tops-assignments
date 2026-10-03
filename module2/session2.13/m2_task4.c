#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_LINE_LEN 512  

void to_lowercase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = (char)tolower((unsigned char)str[i]);
    }
}
main() {
    FILE *file;
    char line[MAX_LINE_LEN];
    char lower_line[MAX_LINE_LEN];
    const char *keyword = "love";

    file = fopen("playlist.txt", "r");
    if (file == NULL) {
        perror("Error opening playlist.txt");
    }
    printf("Songs containing the word 'love':\n");
    while (fgets(line, sizeof(line), file) != NULL) {
    	
        line[strcspn(line, "\n")] = '\0';

        strncpy(lower_line, line, sizeof(lower_line));
        lower_line[sizeof(lower_line) - 1] = '\0'; 
        to_lowercase(lower_line);

        if (strstr(lower_line, keyword) != NULL) {
            printf("%s\n", line); 
        }
    }
    fclose(file);
}

