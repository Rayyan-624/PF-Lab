#include <stdio.h>
#include <conio.h>
int main()
{
	int num_1, num_2;
	printf("Enter the value of num_1 is: \n");
	scanf("%d", &num_1);
	printf("Enter the value of num_2 is: \n");
	scanf("%d", &num_2);
	num_1=num_1+num_2;
	num_2=num_1-num_2;
	num_1=num_1-num_2;
	printf("The value of num_1 is: %d\n", num_1);
	printf("The value of num_2 is: %d\n", num_2);
	return 0;
}