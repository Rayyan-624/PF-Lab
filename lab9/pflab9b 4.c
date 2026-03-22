//Write recursive function to print n Fibonacci numbers.
//Hint: You need to make two recursive calls in the recursive case.

#include <stdio.h>

int fibb(int n){
	if(n == 1 || n == 2){
		return 1;
	}
	else {
		return (fibb(n - 1) + fibb(n - 2));
	}
}

int main(){
	int n = 0;
	
	printf("How many terms you want to print: ");
	scanf("%d", &n);
	printf("Series: ");
	
	for(int i =1; i <= n; i++){
		printf("%d ", fibb(i));
	}
	
	return 0;
}