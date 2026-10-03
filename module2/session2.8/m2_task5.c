#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to format price in Indian style (?1,23,456)
void formatPrice(int price, char *output, size_t size) {
    char temp[50];
    snprintf(temp, sizeof(temp), "%d", price);

    int len = strlen(temp);
    int commaCount = 0;

    // First group: last 3 digits
    int firstGroup = len > 3 ? 3 : len;

    // Calculate commas for Indian numbering system
    if (len > 3) {
        commaCount = (len - 3 + 1) / 2;
    }

    char formatted[50] = "";
    int index = 0;

    // Add ? symbol
    formatted[index++] = '\xE2';
    formatted[index++] = '\x82';
    formatted[index++] = '\xB9'; // UTF-8 for ?

    // Copy first part before last 3 digits
    int prefixLen = len - 3;
    if (prefixLen > 0) {
        int firstDigits = prefixLen % 2 == 0 ? 2 : 1;
        strncpy(formatted + index, temp, firstDigits);
        index += firstDigits;
        prefixLen -= firstDigits;

        // Add commas every 2 digits
        while (prefixLen > 0) {
            formatted[index++] = ',';
            strncpy(formatted + index, temp + (len - 3 - prefixLen), 2);
            index += 2;
            prefixLen -= 2;
        }
        formatted[index++] = ',';
    }

    // Add last 3 digits
    strncpy(formatted + index, temp + len - 3, 3);
    index += 3;
    formatted[index] = '\0';

    // Copy to output buffer
    snprintf(output, size, "%s", formatted);
}

// Generic function to capitalize the first letter of any string
void capitalizeFirstLetter(char *str) {
    if (str == NULL || str[0] == '\0') return;
    str[0] = toupper((unsigned char)str[0]);
}

int main() {
    char priceStr[50];
    char product1[] = "laptop";
    char product2[] = "smartphone";
    char product3[] = "headphones";

    // Capitalize product names
    capitalizeFirstLetter(product1);
    capitalizeFirstLetter(product2);
    capitalizeFirstLetter(product3);

    // Display prices for three products
    int prices[] = {1599, 45999, 799};
    char *products[] = {product1, product2, product3};

    for (int i = 0; i < 3; i++) {
        formatPrice(prices[i], priceStr, sizeof(priceStr));
        printf("%s: %s\n", products[i], priceStr);
    }

    return 0;
}

