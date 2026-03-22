//You are given an array of integers. Write a C program that defines a user-defined function processArray to
//calculate the sum and second maximum values in the array. The program should take the array and its size as
//parameters and use the function to compute these values.
//Input:Array is [4, 8, 1, 15, 6]
//Output:
//Array Sum: 34
//Second Max of Array: 8

#include <stdio.h>

int processArray(int size, int arr[size], int sum, int max, int second_max){
	
	for(int i=0; i < size; i++){
		printf("Enter element no. %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	
	max=arr[0];
	for(int i=0; i < size; i++){
		sum += arr[i];
		
		if(arr[i+1] > max){
			second_max = max;;
			max = arr[i+1];
		}
		
	}
	printf("Sum of Array: %d\n", sum);
	printf("Second maximum of array: %d\n", second_max);
	
	}

int main(){
	
	int size;
	printf("Enter the size of array: ");
	scanf("%d", &size);
	int arr[size], sum =0, max=0, second_max=0;
	
	processArray(size, arr, sum, max, second_max);
	
}