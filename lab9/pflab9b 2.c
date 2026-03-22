#include <stdio.h>


int product(int num1, int num2){
	
	if(num2 == 0){
		return 0;
	}
	else{
		return (num1 + product(num1, num2-1));
	}
	
}
int main(){
	
	int num1, num2;
	printf("Enter value of num1: ");
	scanf("%d", &num1);
	printf("Enter value of num2: ");
	scanf("%d", &num2);
	if(num2 < 0){
		printf("Enter a positive value for num2\n");
	}
	else{
		printf("product is %d\n", product(num1, num2));
	}

	return 0;
}