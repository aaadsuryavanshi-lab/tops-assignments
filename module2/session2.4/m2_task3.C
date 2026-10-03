#include<stdio.h>
main(){
	int age ,order;
	printf("\nEnter your age: ");
	scanf("%d",&age);
	printf("\nEnter order value: ");
	scanf("%d",&order);
	
	if(age>=18 && order>=500)
	{
		printf("\nTrue. the user is eligible for offer.");
	}
	else
	{
		printf("\nFalse. The user is not eligible.");
	}
}
