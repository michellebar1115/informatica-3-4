#include <stdio.h>

int main(void)
{
    int a = 5; // = means assignment
    int b = 5;
    int c = 10; // we created three variables
                // == means comparison
    printf("%d == %d is %d \n", a, b, a==b); // 1 equals true
    printf("%d == %d is %d \n", a, c, a==c); // 0 equals false
    printf("%d == %d is %d \n", a, c, a!=c); // ! means NOT

    //Programs that identifies negative numbers
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    //if is similar to the excel one, else works as what happens if it is what you're asking and else is what is added if it is not what you're asking for.
    // make sure to add {}

    if (number <0) {
        printf("%d is a negative number. \n", number);
    } else {
        printf("%d is a postitive number. \n", number);
    }
}
