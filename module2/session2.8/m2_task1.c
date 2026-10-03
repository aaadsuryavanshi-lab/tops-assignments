#include <stdio.h>
#include <ctype.h>
#include <string.h>

void getUserInitials(const char *fullName, char *initials) {
    int j = 0;
    int len = strlen(fullName);

    int i = 0;
    while (i < len && fullName[i] == ' ') {
        i++;
    }

    if (i < len && fullName[i] != ' ') {
        initials[j++] = toupper(fullName[i]); 
    }

    for (; i < len; i++) {
        if (fullName[i] == ' ' && i + 1 < len && fullName[i + 1] != ' ') {
            initials[j++] = toupper(fullName[i + 1]);
        }
    }

    initials[j] = '\0'; 
}

int main() {
    char initials[10]; 
    const char *name = "Sachin Tendulkar"; 

    getUserInitials(name, initials);

    printf("Full Name: %s\n", name);
    printf("Initials: %s\n", initials);
}

