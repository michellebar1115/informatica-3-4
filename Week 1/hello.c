#include <stdio.h>

int main(void)
{
    char Name[50];
    printf("Your name: ");
    scanf ("%s", &Name);
    printf("Hello %s! \n", Name);

    char Color[50];
    printf("Favorite color: ");
    scanf("%s", &Color);
    printf("Your favorite color is: %s \n.", Color);
}
