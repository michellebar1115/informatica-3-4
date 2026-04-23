#include <stdio.h>

int main(void)
{
    printf("Vending Machine Stock \n");
    printf("--------------------------- \n");


    // Item 1
    printf("Item name: Walmart Donut \n");

    // Variables for first snack
    float price1 = 1.97; // Price
    int quant1 = 8; // Quantity available
    char code1 = 'A'; // Selection code

    // Writting
    printf("Price: $%.2f \n", price1);
    printf("Quantity available: %d \n", quant1);
    printf("Selection code: %c \n", code1);
    printf("\n");

    // Item 2
    printf("Item name: Caprisun \n");

    // Variable for second snack
    float price2 = 0.61; // Price
    int quant2 = 20; // Quantity available
    char code2 = 'B'; // Selection code

    // Writting
    printf("Price: $%.2f \n", price2);
    printf("Quantity available: %d \n", quant2);
    printf("Selection code: %c \n", code2);
    printf("\n");


    // Item 3
    printf("Item name: Auntie Anne's Cinnamon Pretzle Bites \n");

    // Variable for second snack
    float price3 = 5.49; // Price
    int quant3 = 5; // Quantity available
    char code3 = 'C'; // Selection code

    // Writting
    printf("Price: $%.2f \n", price3);
    printf("Quantity available: %d \n", quant3);
    printf("Selection code: %c \n", code3);
    printf("\n");
}
