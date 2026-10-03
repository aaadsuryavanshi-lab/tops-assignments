#include <stdio.h>
#include <string.h> 

main() {
    char songTitle[] = "Tum Hi Ho";

    size_t length = strlen(songTitle);

    printf("The length of the string \"%s\" is: %zu\n", songTitle, length);

}

