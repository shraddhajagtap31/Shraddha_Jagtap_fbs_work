#include <stdio.h>

void main(){
	int minutes,hours,remaining_minutes;
	minutes = 246;
	hours = minutes / 60;
	remaining_minutes =  minutes % 60;
	printf("The time taken by meera was %d hour and %d minutes",hours,remaining_minutes);
}