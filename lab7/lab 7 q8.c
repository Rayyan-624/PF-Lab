//Take an array with N elements as input, and sort the array into ascending order and then
//print the sorted version.
//Input: {6, 3, 2, 7, 1, 5}
//Output: {1, 2, 3, 5, 6, 7}

#include <stdio.h>

int main(){
	int N, temp;
	
	printf("Enter the number of total elements \n");
	scanf("%d", &N);
	
	int arr[N];
	
	for(int i=0; i < N; i++){
		printf("Enter element no. %d: ", i+1);
		scanf("%d", &arr[i]);
		printf("\n");
	}
	
	for(int i=0; i < N; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	
		for(int i=0; i < N-1; i++){
			for(int j=0; j < N-i-1; j++){
				if(arr[j]>arr[j+1]){
					temp = arr[j];
					arr[j] = arr [j+1];
					arr[j+1] = temp;
			}
		}
	}
	
	printf("Sorted array in asscending order: ");
	
	
	for(int i=0; i < N; i++){
		printf("%d ", arr[i]);
	}
	
	return 0;
}