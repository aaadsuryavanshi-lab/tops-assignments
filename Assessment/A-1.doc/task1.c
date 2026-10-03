#include<stdio.h>
main(){
	float percentage;
	printf("\nEnter the percentage: ");
	scanf("%f",&percentage);
	
	if(percentage<=1  && percentage>=100)
	{
		printf("\nThe percentage is valid for grading.");
	}
	else if(percentage>=90)
	{
		printf("A \nExcellent performance.");	
	}
	else if(percentage>=75)
	{
		printf("B \nWell done!");
	}
	else if(percentage>=60)
	{
		printf("C \nGood job!");
	}
	else if(percentage>=45)
	{
		printf("D \nKeep improving.");
	}
	else if(percentage<=45)
	{
		printf("F \nYou can do better.");
	}
	else
	{
		printf("\nErorr in percentage please enter again!");
	}
}
