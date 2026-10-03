#include<stdio.h>
main(){
	int price;
	float discount=10, final_price=5,total;
	char product[20];
	printf("\nEnter the product: ");
	scanf("%s",&product);
	printf("\nEnter the price: ");
	scanf("%d",&price);
	total=price*(price-(discount/100));
	printf("\nThe total amount will be =%f",total);
	if(total>=2000)
	{
		printf("\n you are a member.");
		final_price=total*(total-(5/100));
		printf("\nThefinal price is=%f",final_price);
	}
}
