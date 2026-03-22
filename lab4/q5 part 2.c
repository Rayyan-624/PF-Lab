#include <stdio.h>
#include <conio.h>

int main ()
{
	int num;
	
	printf("Enter the value of number : \n");
	scanf ("%d", &num);
	
	num=num<<4;
	
	printf("updated value of number is %d", num);
	
	return 0;
}
