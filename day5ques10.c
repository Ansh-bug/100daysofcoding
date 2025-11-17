// Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>

int main (){
    int total_seconds, hours, minutes, seconds, remaining_seconds;

    printf ("Enter the time in seconds: ");
    scanf ("%d", &total_seconds);

    hours= total_seconds /3600;

    remaining_seconds = total_seconds % 3600;

    minutes = remaining_seconds / 60;

    seconds = remaining_seconds % 60;

    printf ("The time in HH:MM:SS format is: %2d:%2d:%2d", hours, minutes, seconds);

return 0;
}

