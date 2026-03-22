#include <stdio.h>
#include <conio.h>

int main ()
{
	unsigned int num;
	
	printf("Enter the value of number : \n");
	scanf ("%u", &num);
	
	num=num<<4;
	
	printf("updated value of number is %u", num);
	
	return 0;
}
