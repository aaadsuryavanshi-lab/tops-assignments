#include <stdio.h>
//entry  controll
int main() {
    int count = 0;

    while (count > 0) 
	{ 
        printf("Count is %d\n", count);
        count--;
    }

    printf("Loop ended without running even once.\n");
}

