#include <stdio.h>

int isPrime (int a){
	
	if(a > 2){
	for(int i=2; i < a; i++){
	   	if (a % i == 0){
	   		return 0;
	   	}
	}}
	else if(a <= 1){
		return 0;
	}
	return 1;
	}
	
	int main(){
		int a, x;
		printf("Enter the number: ");
		scanf("%d", &a);
		x = isPrime(a);	
        printf("%d", x);	
	}
	
