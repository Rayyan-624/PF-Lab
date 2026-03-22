#include <stdio.h>
#include <conio.h>

int main()
{
	float distance, time, avg_speed;
	printf("Enter the number of hours travelled: ");
	scanf("%f", &time);
	printf("Enter the distance travelled: ");
	scanf("%f", &distance);
	
	avg_speed=distance/time;
	printf("Average speed:- %.1f", avg_speed); 
	
	return 0;
}