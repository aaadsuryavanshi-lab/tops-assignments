#include <stdio.h>

main() {
    int playlistRatings[3][5] = {
        {4, 5, 3, 4, 5}, 
        {5, 4, 4, 5, 3}, 
        {3, 3, 4, 2, 4}  
    };

    int playlistIndex = 1, day; 

    printf("Ratings for Playlist %d over 5 days:\n", playlistIndex + 1);

    for (day = 0; day < 5; day++) {
        printf("Day %d: %d\n", day + 1, playlistRatings[playlistIndex][day]);
    }

}

