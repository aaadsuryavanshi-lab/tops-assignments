#include <stdio.h>

int main() {
    int i, dailySteps[7] = {5000, 7200, 6800, 8000, 7500, 9000, 6500};

    
    printf("Daily Step Count for the Week:\n");
    
    for (i = 0; i < 7; i++) {
        printf("Day %d: %d steps\n", i + 1, dailySteps[i]);
    }

}

