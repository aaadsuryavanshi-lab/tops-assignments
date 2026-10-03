#include <stdio.h>
main() {
    int age;
    printf("Enter your age=");
    scanf("%d", &age);
    if(age>=18)
	{
    	printf("\nYou are eligible for driving licence.");	
	}
	else if(age>=21)
	{
    	printf("\nYou are eligible for Credit card.");	
	}
	else if(age>=25)
	{
    	printf("\nYou are eligible for car rental.");	
	}
	else
	{
    	printf("\nYou are not eligible for driving licence, Credit card and car rental.");	
	}
	
	
