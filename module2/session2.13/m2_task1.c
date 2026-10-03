#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("playlist.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1; 
    }

    fprintf(fp, "1. Song One\n");
    fprintf(fp, "2. Song Two\n");
    fprintf(fp, "3. Song Three\n");

    fclose(fp);

    printf("playlist.txt created and songs written successfully.\n");
}

