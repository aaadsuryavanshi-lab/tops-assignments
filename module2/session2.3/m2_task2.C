#include<stdio.h>
main(){
	float amt,Total_amount;
    const int gst=18;
	printf("\nEnter the Amount: ");
	scanf("%f",&amt);
	printf("\nYour total amount including GST will be: ");
	Total_amount= amt+((amt*gst)/100);
	printf("%f",Total_amount);
}

