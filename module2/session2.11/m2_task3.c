#include <stdio.h>

main() {
   
    float orders[5] = {250.50, 120.00, 499.99, 89.75, 300.00};
    int i;
    float *ptr = orders; 
    
    printf("Order Amounts and Their Memory Addresses:\n\n");
    
    for (i = 0; i < 5; i++) {
        printf("Order %d: Amount = %.2f, Address = %p\n", 
               i + 1, *(ptr + i), (void*)(ptr + i));
    }
    
}

