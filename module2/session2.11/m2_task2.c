#include <stdio.h>

void swapPlaylistCounts(int *a, int *b) {
    int temp = *a;  
    *a = *b;     
    *b = temp;    
}

main() {
    int playlist1 = 12; 
    int playlist2 = 25; 

    printf("Before swap:\n");
    printf("Playlist 1 songs: %d\n", playlist1);
    printf("Playlist 2 songs: %d\n", playlist2);

    swapPlaylistCounts(&playlist1, &playlist2);

    printf("\nAfter swap:\n");
    printf("Playlist 1 songs: %d\n", playlist1);
    printf("Playlist 2 songs: %d\n", playlist2);

}

