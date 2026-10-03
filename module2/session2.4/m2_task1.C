#include<stdio.h>
main(){
	int item_price, quantity, calculate_total;
	printf("\nEnter the item price: ");
	scanf("%d",&item_price);
	printf("\nQuantity :");
	scanf("%d",&quantity);
	calculate_total = item_price*quantity;
    printf("\n Your total bill will be: %d ",calculate_total);
}
