#include <stdio.h>
#include <conio.h>

int main()
{
	int pennies=368, quarters, dimes, nickles;
	
	quarters=pennies/25;
	pennies= pennies%25;
	
	dimes=pennies/10;
	pennies=pennies%10;
	
	nickles=nickles/5;
	pennies=pennies%5;
	
	printf("Quarters: %d \n", quarters);
	printf("Dimes: %d \n", dimes);
	printf("Nickles: %d \n", nickles);
	printf("Pennies: %d \n", pennies);
	
	return 0;
}