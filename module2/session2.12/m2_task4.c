#include <stdio.h>
#include <string.h>

struct Bio {
    char description[100];
    int age;
};

struct InstaProfile {
    char username[50];
    int followers;
    struct Bio bio; 
};

main() {
    struct InstaProfile profile;

    strcpy(profile.username, "tech_guru");
    profile.followers = 1200;              
    strcpy(profile.bio.description, "Coder & Tech Enthusiast"); 
    profile.bio.age = 25;                

    printf("Instagram Profile Details:\n");
    printf("Username: %s\n", profile.username);
    printf("Followers: %d\n", profile.followers);
    printf("Bio Description: %s\n", profile.bio.description);
    printf("Age: %d\n", profile.bio.age);

}

