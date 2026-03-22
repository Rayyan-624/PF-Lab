#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	int a1=5, a2=2, a3=-3, b1=-4, b2=9, b3=2;
	float A, B, angle=53*3.142/180;
	float dot_product;
	
	A=sqrt((pow(a1,2))+(pow(a2,2))+(pow(a3,2)));
	B=sqrt((pow(b1,2))+(pow(b2,2))+(pow(b3,2)));
	
	dot_product = A*B*cos(angle);
	
	printf("The dot product between two vectors is %.1f", dot_product);
	
	return 0;
}