#include <stdio.h>

int main()
{
	for(int i=1; i<6; i++){
		for(int j=1; j<6-i; j++){
			printf(" ");
		}
		printf("*");
		if(i>1){
			for(int k=1; k<=2*i-3; k++){
				printf(" ");
			}
			printf("*");
		}
		printf("\n");
	}
	for(int a=4; a>0; a--){
		for(int b=0; b<5-a; b++){
			printf(" ");
		}
		printf("*");
		if(a>1){
			for(int c=1; c<=2*a-3; c++){
				printf(" ");
			}
			printf("*");
		}
		printf("\n");
	}
	return 0;
	
	
}