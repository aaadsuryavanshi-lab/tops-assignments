#include<stdio.h>
#include<string.h>
main() {
	
	char team[10];
	char t[20]="MI";

    printf("Enter your favorite IPL team: ");
    scanf("%s",team);

    if(strcmp(team,"MI")==0)
	{
        printf("Go Mumbai Indians!");
    }
    else if(strcmp(team,"CSK")==0) 
	{
        printf("Chennai Super Kings for the win!");
    }
    else if (strcmp(team,"RCB")==0) 
	{
        printf("Ee Sala Cup Namde!");
    }
    else if (strcmp(team,"KKR")==0)
	{
        printf("Korbo Lorbo Jeetbo!");
    }
    else if (strcmp(team,"RR")==0)
	{
        printf("Halla Bol rajasthan!");
    }
    
    else {
        printf("Team not found!");
    }
    printf("\n team=%s",team);
    
}
