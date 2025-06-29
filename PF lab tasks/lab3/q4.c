#include<stdio.h>
#include<conio.h>

int main()
{
	int salary;
	float tax_rate, net_income, tax;
	
	printf("The tax rate is:\n");
	scanf("%f", &tax_rate);
	printf("The salary is:\n");
	scanf("%d", &salary);
	
	tax=(tax_rate/100)*(salary);
	net_income=(salary)-(tax);
	
	printf("The net income after tax deduction is %.1f", net_income);
	
	return 0;
}