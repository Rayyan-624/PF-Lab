#include <stdio.h>
#include <conio.h>

int main()
{
	float oper1, oper2; 
	char operator; 
	
	printf("Enter the value of oper1: \n");
	scanf("%f", &oper1);
	printf("Enter the value of oper2: \n");
	scanf("%f", &oper2);
	
	printf("Choose the operator (+, -, *, /) \n");
	scanf(" %c", &operator);
	
	switch (operator)
	{
		case '+':
		    printf("Sum: %.2f", oper1+oper2);
		    break;
		case '-':
		    printf("Subtraction: %.2f", oper1-oper2);
		    break;
		case '*':
		    printf("Multiplication: %.2f", oper1*oper2);
			break;
		case '/':
		    printf("Division: %.2f", oper1/oper2);
			break;
		default:
		   	printf("Invalid Operator");	    
	}
	return 0;
}