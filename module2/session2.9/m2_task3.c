#include <stdio.h>

double calculateAverage(int orders[], int size) {
    if (size <= 0) {
        return 0.0; 
    }

    int i, sum = 0;
    for ( i = 0; i < size; i++) {
        sum += orders[i];
    }

    return (double)sum / size; 
}

int main() {
    int orders[7];
    int i;

    printf("Enter your Zomato order amounts for 7 days:\n");

    for (i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        if (scanf("%d", &orders[i]) != 1) {
            printf("Invalid input. Please enter integers only.\n");
            return 1; 
        }
    }

    double avg = calculateAverage(orders, 7);

    printf("\nAverage spend for the week: %.2f\n", avg);

}

