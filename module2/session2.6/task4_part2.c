#include <stdio.h>

int main() {
    int count = 0;

    // Exit-controlled loop
    do {
        printf("Count is %d\n", count);
        count--;
    } while (count > 0); 

    printf("Loop ended after running once.\n");
    return 0;
}

