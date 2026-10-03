#include <stdio.h>
#include <string.h>

#define MAX_ITEMS 10     
#define NAME_LEN 50     

void addToCart(char cart[][NAME_LEN], int *count, const char *product,int i) {
    if (*count >= MAX_ITEMS) {
        printf("Cart is full! Cannot add more items.\n");
        return;
    }

    strncpy(cart[*count], product, NAME_LEN - 1);
    cart[*count][NAME_LEN - 1] = '\0'; 
    (*count)++;

    printf("Updated Cart:\n");
    
	for (i = 0; i < *count; i++) {
        printf("%d. %s\n", i + 1, cart[i]);
    }
    printf("\n");
}
int main() {
    char cart[MAX_ITEMS][NAME_LEN]; 
    int count = 0;
	int i;           

    addToCart(cart, &count, "Apple");
    addToCart(cart, &count, "Banana");
    addToCart(cart, &count, "Orange");

    printf("Final Cart in main():\n");
    for (i = 0; i < count; i++) {
        printf("%d. %s\n", i + 1, cart[i]);
    }

}

