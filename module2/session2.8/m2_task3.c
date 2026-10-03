#include <stdio.h>

void increaseFollowersByValue(int followers) {
    followers += 1000; 
    printf("[Inside increaseFollowersByValue] Followers: %d\n", followers);
}

void increaseFollowersByReference(int *followers) {
    if (followers != NULL) { 
        *followers += 1000;
        printf("[Inside increaseFollowersByReference] Followers: %d\n", *followers);
    }
}

int main() {
    int followers;

    // Input validation
    printf("Enter current followers count: ");
    if (scanf("%d", &followers) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    printf("\nInitial Followers: %d\n", followers);

    increaseFollowersByValue(followers);
    printf("[After increaseFollowersByValue] Followers: %d (unchanged)\n", followers);

    increaseFollowersByReference(&followers);
    printf("[After increaseFollowersByReference] Followers: %d (changed)\n", followers);

    return 0;
}

