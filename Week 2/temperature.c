#include <stdio.h>

int main(void)
{
    int F;
    printf("Fahrenheit= ");
    scanf("%d",&F);

    int celcius = (F-32)/1.8;
    printf("Celcius = %d° \n", celcius);
    printf("%d°F = %d°C\n",F,celcius);
// -40°F is the same as -40°C.
}

