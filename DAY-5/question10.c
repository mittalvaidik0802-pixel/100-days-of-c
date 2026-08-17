#include <stdio.h>

int main()
{
    int time, hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%d", &time);

    hours = time / 3600;
    minutes = (time % 3600) / 60;
    seconds = time % 60;

    printf("%d:%d:%d", hours, minutes, seconds);

    return 0;
}