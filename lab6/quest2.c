//Write a program that will generate the Fibonacci series up to 10000. Also find the sum of
//the generated Fibonacci numbers divisible by 3, 5 or 7 only.
//An example of the Fibonacci series is: 1 1 2 3 5 8 13 21..........
//Note: Do this task by using a for loop DO NOT use arrays for this.

#include <stdio.h>

int main(){
	int num1=0, num2=1, num3=0, sum=0, i;
	
	printf("The fibonacci series is: \n");
	printf("%d %d ", num1, num2);
	
	for(i=0; i<=10000;)
	{
		num3=num1+num2;
		num1=num2;
		num2=num3;
		
		if(num3<=10000){
			printf("%d ", num3);
			
		if((num3%3==0) || (num3%5==0) || (num3%7==0)){
		sum+=num3;
	}
	}
	else{
		break;
	}
}
	printf("\nThe sum of numbers divisble by 3, 5, or 7 will be %d", sum);
	

return 0;
}