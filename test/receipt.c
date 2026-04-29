#include <stdio.h>

int main(void)
{
    char item[50];
    printf("Item name: ");
    scanf("%c",&item);
    printf("\n");

    float price;
    printf("Price: ");
    scanf("%f",&price);
    printf("\n");

    int quantity;
    printf("Quantity: ");
    scanf("%d",quantity);
    printf("\n");

    float total = price*quantity;

    //Candy Lane
    printf("\n\nWelcome to the Candy Lane Shop!\n");
    printf("---------------------------\n");
    printf("Item\tPrice\tQuantity\t\tTotal\n");
    printf("%c\t%.2f\t%d\t%d\n",item,price,quantity,total);
}
