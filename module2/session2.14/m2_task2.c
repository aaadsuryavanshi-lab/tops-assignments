#include <stdio.h>
#include <stdbool.h>

bool isEven(int num) {
    if (num % 2 == 0) {
        return true;  
    } else {
        return false; 
    }
}
main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isEven(number)) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }
}

