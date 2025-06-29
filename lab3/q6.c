#include <stdio.h>
#include<conio.h>
#include <math.h>

int main()
{
	float a, b, c, root_1, root_2;
	
	printf("Enter the value of a \n");
	scanf("%f", &a);
	printf("Enter the value of b \n");
	scanf("%f", &b);
	printf("Enter the value of c \n");
	scanf("%f", &c);
	
	float discriminant = sqrt((b*b)-(4*a*c));
	
	root_1=(-b+ discriminant)/(2*a);
	root_2=(-b- discriminant)/(2*a);
	
	printf("Root 1 : %.1f ", root_1);
	printf("Root 2 : %.1f ", root_2);
	
	return 0;
}