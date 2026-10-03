#include <stdio.h>

struct Playlist {
    char title[100];
    char artist[100];
    int duration; 
};

main() {

    struct Playlist song = {
        "Shape of You",   
        "Ed Sheeran",     
        233               
    };

    printf("Song Title : %s\n", song.title);
    printf("Artist     : %s\n", song.artist);
    printf("Duration   : %d seconds\n", song.duration);

}

