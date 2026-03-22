

#include <stdio.h>

int GCDLoop(int a, int b){
	int temp;
	
	while(b != 0){
	temp = b;
	b = a % b;
	a = temp;
	}
	return a;
}

int GCDRecursive(int a, int b){
	if(b == 0){
		return a;
	}
	else{
		return GCDRecursive (b, a%b);
	}
}


int main (){
	
	int a=0, b=0;
	int GCD=0;
	int choice = 0;
	
	printf("Enter values of a and b \n");
	scanf("%d %d", &a, &b);
	
	printf("Press 1 if you want to calculate GCD using loop method\n");
	printf("Press 2 if you want to calculate GCD using recursive method\n");
	
	scanf("%d", &choice);
	
	switch (choice){
		case 1:
			printf("GCD of %d and %d is %d\n ", a, b, GCDLoop(a, b));
			break;
		case 2:
			printf("GCD of %d and %d is %d\n", a, b, GCDRecursive(a, b));
			break;
		default: 
			printf("Inavlid Input\n");		
	}
	return 0;
}