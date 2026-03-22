//Write a C Program to 2nd lowest Number in an array Using Dynamic Memory Allocation.
//Note: The array must be dynamically resized and initially the array size will be taken by the user
//and then resized by the user
//Example arr[5]={1,2,3,4,5}
////After resizing
//Arr[7]={1,2,3,4,5,6,7}
//Take the same array and resize it.

#include <stdio.h>
#include <stdlib.h>

void secLow(int* ptr, int N){
		int Low=9999, secLow=9998;

	for(int i = 0; i < N; i++){
		if(*(ptr+i) < Low){
			secLow = Low;
			Low = *(ptr + i);
	    }
	    else if(*(ptr + i) != Low && *(ptr + i) < secLow){
	    	secLow = *(ptr + i);
		}
	}
	printf("The second lowest is %d: \n", secLow);
}

int main(){
	int N=0;

	printf("Enter the size of array: ");
	scanf("%d", &N);
	
	int* ptr= (int*) calloc(N, sizeof(int));
	
	for(int i =0; i < N; i++){
		printf("Enter %d element: ", i+1);
		scanf("%d", ptr + i);
	}
	printf("\nArr[N] = ");
	for(int i = 0; i < N; i++){
		printf("%d ", *(ptr+i));
	}
	printf("\n");
	secLow(ptr, N);
	
//	Resizing the Array
	int temp = N;
	printf("\nEnter the size of array: ");
	scanf("%d", &N);
	ptr= (int*) realloc(ptr, N*sizeof(int));
	
	for(int i = temp; i < N; i++){
		printf("Enter %d element: ", i+1);
		scanf("%d", ptr + i);
	}
	
	printf("\nArr[N] = ");
	for(int i = 0; i < N; i++){
		printf("%d ", *(ptr+i));
	}
	printf("\n");
	secLow(ptr, N);
	
	free(ptr);
	return 0;
}