#include <stdio.h>

int main(void)
{
    int Height;
    printf("Height of your rectangle: ");
    scanf ("%d", &Height);
    printf("Your rectangle measures %d in height.\n", Height);

    int Width;
    printf("Width of your rectangle: ");
    scanf ("%d", &Width);
    printf("Your rectangle measures %d in width.\n", Width);

    int Area = Height*Width;
    int Perimeter = 2*(Height+Width);
    printf("Area: %d\n",Area);
    printf("Perimeter: %d\n",Perimeter);
}
