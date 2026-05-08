#include <stdio.h>

int main(void)
{
    int C;
    printf("Celcius= ");
    scanf("%d",&C);

    int F = (C*1.8)+32;
    printf("%d°C = %d°F",C,F);

    if(C<0){
    printf("❄️ Freezing weather");}
        else if(C<10){
        printf("🥶 Very cold weather");}
         else if(C<20){
         printf("🧥 Chilly weather");}
            else if(C<30){
            printf("🖼️ Normal weather");}
                else if(C<40){
                printf("☀️ Hot weather");}
                    else {
                    printf("🔥 Very hot weather");}
    }
