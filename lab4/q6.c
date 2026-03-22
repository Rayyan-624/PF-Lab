#include <stdio.h>
#include <conio.h>

int main()
{
	int num, temp, result; 
	
	printf ("Enter the number : \n");
	scanf("%d",&num);
	
	temp=num<<3;
	result=temp-num;
	
	printf("Result after number being multiplied by 7 : %d", result);
	
	return 0;
}
