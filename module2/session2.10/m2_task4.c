#include <stdio.h>
#include <string.h>

main() {
    char fullName[40], username[6]; 

    printf("Enter your full name: ");
    fgets(fullName, sizeof(fullName), stdin);

    size_t len = strlen(fullName);
    if (len > 0 && fullName[len - 1] == '\n') {
        fullName[len - 1] = '\0';
        len--;
    }
    if (len < 5) 
	{
        strcpy(username, fullName);
    } else 
	{
        char temp[6];
        strncpy(temp, fullName, 5);
        temp[5] = '\0';
        strcpy(username, temp);
    }

    printf("Generated username: %s\n", username);

}

