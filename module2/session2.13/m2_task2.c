#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char line[256]; 

    file = fopen("playlist.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1; 
    }
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line); 
    }
    fclose(file);
}

