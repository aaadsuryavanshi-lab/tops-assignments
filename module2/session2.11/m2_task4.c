#include <stdio.h>
int i,followers,n;
void incrementFollowers(int *followers, int n) {
    for ( i = 0; i < n; i++) {
        *(followers + i) += 100; 
    }
}

main() {
    int followers[5] = {1200, 850, 940, 1020, 760}; 
    int n = 5,i;

    incrementFollowers(followers, n);

    printf("Updated follower counts:\n");
    for ( i = 0; i < n; i++) {
        printf("Friend %d: %d\n", i + 1, *(followers + i));
    }

}

