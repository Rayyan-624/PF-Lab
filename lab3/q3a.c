#include <stdio.h>
#include <conio.h>

int main()
{
	int num_1, num_2, temp;
	
	printf("Enter the value of num_1: \n");
	scanf("%d",&num_1);
	printf("Enter the value of num_2: \n");
	scanf("%d",&num_2);
	
//	Swapping the values
	temp=num_1;
	num_1=num_2;
	num_2=temp;
	
	printf("The value of num_1 after swapping is %d \n", num_1);
	printf("The value of num_2 after swapping is %d \n", num_2);
	
	return 0;
}