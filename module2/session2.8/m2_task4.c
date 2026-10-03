#include <stdio.h>
#include <string.h>

// Function to format price in Indian style with ? symbol
void formatPrice(int price, char *output) {
    char numStr[20];
    sprintf(numStr, "%d", price); // Convert number to string

    int len = strlen(numStr);

    // If price is less than 1000, just add ? and return
    if (len <= 3) {
        sprintf(output, "?%s", numStr);
        return;
    }

    char result[25];
    int i = len - 1, j = 0, digitCount = 0;

    // Reverse traversal to insert commas
    while (i >= 0) {
        result[j++] = numStr[i--];
        digitCount++;

        // First group of 3 digits, then groups of 2 digits
        if ((digitCount == 3 && i >= 0) || (digitCount > 3 && (digitCount - 3) % 2 == 0 && i >= 0)) {
            result[j++] = ',';
        }
    }
    result[j] = '\0';

    // Reverse back to correct order
    int resLen = strlen(result);
    char formatted[25];
    for (i = 0; i < resLen; i++) {
        formatted[i] = result[resLen - 1 - i];
    }
    formatted[resLen] = '\0';

    // Add ? symbol
    sprintf(output, "?%s", formatted);
}

int main() {
    int prices[3] = {1599, 25000, 999};
    char formattedPrice[25];

    printf("Product Prices:\n");
    for (int i = 0; i < 3; i++) {
        formatPrice(prices[i], formattedPrice);
        printf("Product %d: %s\n", i + 1, formattedPrice);
    }

    return 0;
}

