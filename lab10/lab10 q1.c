//Write a program to create an array of N elements using ONLY POINTERS (You cannot declare as
//arr[n]). You can do this using calloc/malloc functions. Then you must take user input of each
//element inthe array (USE POINTER) and calculate the sum of the array. The whole process must be
//done bydereferencing the array using ONLY POINTERS (You cannot access by writing arr[i]).

#include <stdio.h>
#include <stdlib.h>

int main(){
	int N=0, sum=0;
	
	printf("Enter the value of N: ");
	scanf("%d", &N);
	
	int* ptr = (int*)malloc(N*sizeof(int));
	
	for(int i = 0; i < N; i++){
		printf("Enter the value of %d element: ", i+1);
		scanf("%d", ptr+i);
		sum += *(ptr+i);
	}
	
	printf("The sum is %d: ", sum);
	free(ptr);
	
	return 0;
}
