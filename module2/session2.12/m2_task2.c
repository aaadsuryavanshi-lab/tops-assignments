#include <stdio.h>

struct FoodItem {
    char itemName[50]; 
    float price,rating; 
	int i;          
};

main() {
    struct FoodItem menu[3] = {
        {"Paneer Butter Masala", 250.50, 4.5},
        {"Chicken Biryani", 320.00, 4.7},
        {"Veg Hakka Noodles", 180.75, 4.3}
    };
    int i;

    printf("------ Zomato Style Menu ------\n");
    for (i = 0; i < 3; i++) {
        printf("Item %d:\n", i + 1);
        printf("  Name   : %s\n", menu[i].itemName);
        printf("  Price  : %.2f\n", menu[i].price);
        printf("  Rating : %.1f/5\n", menu[i].rating);
        printf("------------------------------\n");
    }

}

