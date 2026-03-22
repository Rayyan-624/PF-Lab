#include <stdio.h>
#include <conio.h>
#include <math.h>

int main ()
{
	float x1, x2, y1, y2;
	
	printf("Enter the value of x1 : \n");
	scanf("%f", &x1);
	printf("Enter the value of x2 : \n");
	scanf("%f", &x2);
	printf("Enter the value of y1 : \n");
	scanf("%f", &y1);
	printf("Enter the value of y2 : \n");
	scanf("%f", &y2);
	
	float x, y, distance;
	
	x=x2-x1, y=y2-y1;

	distance=sqrt(pow(x,2))+(pow(y,2));
	printf("Euclidean distance is %.1f", distance);
		
	return 0;
}