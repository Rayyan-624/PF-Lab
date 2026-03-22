#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	float num;
	int result;
	
	printf("Enter the number: ");
	scanf("%f", &num);
	
	result = (log10(num) == floor(log10(num)));
	
	printf("%d", result);
	
	
	return 0;
}