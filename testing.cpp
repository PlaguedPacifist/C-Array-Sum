#include <stdio.h>
#include <conio.h>
int main()
{
int finalseconds, seconds, minutes, hours;

scanf("%d", &seconds);

hours = ((seconds/60)/60);
minutes = ((seconds/60) % 60);
finalseconds = (seconds % 60);
printf("%d Hours\n%d Minutes\n%d Seconds", hours, minutes, finalseconds);

return(0);

}
