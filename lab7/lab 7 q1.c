#include <stdio.h>

int main(){
	int num, den;
	int count=0;
	
	printf("Enter the value of numerator(dividend) \n");
	scanf("%d", &num);
	printf("Enter the value of denominator(divisor) \n");
	scanf("%d", &den);
	
	if(den>num){
		printf("Answer is 0");
	}
	else {
		while (den<=num){
		num-=den;
		count++;
	}
	printf("Answer is %d", count);
    }
    
	return 0;
}        