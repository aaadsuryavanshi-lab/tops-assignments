#include<stdio.h>
main(){
	int like, comments, shares;
	printf("\nEnter total numbers of like: ");
	scanf("%d",&like);
	printf("\nEnter total numbers of comments: ");
	scanf("%d",&comments);
	printf("\nEnter total numbers of shares: ");
	scanf("%d",&shares);
	if(like>=1000 && comments>=200 && shares>=50)
	{
		printf("\nPost is trending.");
	}
	else
	{
		printf("\nPost is not trending.");
	}
}
