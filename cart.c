#include <stdio.h>

int main() {
    // Shopping Cart Program

    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("What item do you want to buy: ");
    scanf(" %[^\n]", item);  // Read full item name with spaces

    printf("What is the unit price: ");
    scanf("%f", &price);

    printf("What is the quantity you want: ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("\n--- Shopping Summary ---\n");
    printf("Item: %s\n", item);
    printf("Unit Price: %c%.2f\n", currency, price);
    printf("Quantity: %d\n", quantity);
    printf("Total: %c%.2f\n", currency, total);

    return 0;
}
