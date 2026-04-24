#include <stdio.h>

int main(void)
{
    float price1 = 1.97; // Price
    int quant1 = 8; // Quantity available
    char code1 = 'A'; // Selection code

    float price2 = 0.61; // Price
    int quant2 = 20; // Quantity available
    char code2 = 'B'; // Selection code

    float price3 = 5.49; // Price
    int quant3 = 5; // Quantity available
    char code3 = 'C'; // Selection code

    printf("Welcome to the Snack Shop!\n");
    printf("---------------------------\n");
    printf("Item\t\tPrice\tQuantity\tCode\n");
    printf("Donuts\t\t$%.2f\t%d\t\t%c\n",price1,quant1,code1);
    printf("Caprisun\t$%.2f\t%d\t\t%c\n",price2,quant2,code2);
    printf("Pretzle\t\t$%.2f\t%d\t\t%c\n",price3,quant3,code3);

}
