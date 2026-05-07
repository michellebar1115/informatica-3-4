#include <stdio.h>

int main(void)
{
    int minutes;
    printf("Movie running time (in minutes): ");
    scanf("%d", &minutes);

    int startHour;
    int startMin;
    printf("Start time: ");
    scanf("%d:%d", &startHour,&startMin);

    int hour = minutes/60;
    int min = minutes%60;

    int endHour= startHour+hour;
    int endMin= startMin+min;

    if (endMin>=60){
    endHour = endHour + (endMin / 60); //Update value of endHour variable
    endMin = endMin % 60; //Extra minutes will appear this way
    }

    printf("The movie will last %d hr and %d min\n", hour,min);
    printf("End time: %d:%02d \n",endHour,endMin);



}

