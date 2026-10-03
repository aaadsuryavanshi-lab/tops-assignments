#include <stdio.h>
#include <string.h> 

main() {
    char c,username1[20], username2[20];
    
    printf("Enter first username: ");
    scanf("%s", username1);
  
    printf("Enter second username: ");
    scanf("%s", username2);
        
	if(strcmp(username1, username2)==0)
	{
    	printf("Usernames are the SAME.\n");
    } 
	else 
	{
        printf("Usernames are DIFFERENT.\n");
    }

}

