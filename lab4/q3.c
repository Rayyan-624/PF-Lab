#include <stdio.h>
#include <conio.h>

int main()
{
	int num_1, num_2, result;
	
	printf("Enter the value of num_1 : \n");
	scanf("%d", &num_1);
	printf("Enter the value of num_2 : \n");
	scanf("%d", &num_2);
	
	result=num_1&num_2;
	result=result>>2;
	
	printf ("The result is : %d", result);
	
	return 0;
}