#include <stdio.h>

int main() {
    int cricketscores[4][2] = {
        {180, 175}, 
        {200, 210},  
        {150, 160},
        {220, 215}  
    };

    int i,j,matches = 4, teams = 2;    

    for (i = 0; i < matches; i++) {
        int highest = cricketscores[i][0]; 

        for ( j = 1; j < teams; j++) {
            if (cricketscores[i][j] > highest) {
                highest = cricketscores[i][j];
            }
        }

        printf("Highest score in match %d: %d\n", i + 1, highest);
    }

}

