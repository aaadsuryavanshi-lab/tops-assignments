#include <stdio.h>
#include <string.h>

int main() {
    char meal[20];

    printf("Enter your preferred meal time (breakfast/lunch/dinner/snack): ");
    scanf("%19s", meal);

    int food;

    if (strcmp(meal, "breakfast") == 0)
        food = 1;
    else if (strcmp(meal, "lunch") == 0)
        food = 2;
    else if (strcmp(meal, "dinner") == 0)
        food = 3;
    else if (strcmp(meal, "snack") == 0)
        food = 4;
    else
        food = 0;

    switch (food) {
        case 1:
            printf("Suggested dish: Masala Dosa\n");
            break;

        case 2:
            printf("Suggested dish: Biryani\n");
            break;

        case 3:
            printf("Suggested dish: Paneer Butter Masala\n");
            break;

        case 4:
            printf("Suggested dish: Samosa\n");
            break;

        default:
            printf("Try some fruits!\n");
    }
}
