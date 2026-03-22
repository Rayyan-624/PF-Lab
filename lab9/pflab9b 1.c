#include <stdio.h>

int fact(int N){
	if(N == 0 || N == 1){
		return 1;
	}
	else{
		return (N * fact(N - 1));
	}
}

int main(){
	int N=0;
	
	printf("Enter the value of N: \n");
	scanf("%d", &N);
	
	printf("The factorial of %d is %d\n", N, fact(N));
	
	return 0; 
}