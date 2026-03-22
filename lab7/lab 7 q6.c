//Take an array with N elements as input, and then output the frequency of each element
//present in the array. Example:
//Input: {2, 4, 2, 3, 5, 5, 4, 4}
//Output:
//Frequency of 2 = 2
//Frequency of 4 = 3
//Frequency of 3 = 1
//Frequency of 5 = 2

#include <stdio.h>

int main(){
	
	int N;
	
	printf("How many elements do you want to enter? \n");
	scanf("%d", &N);
	int arr[N];
	
	for(int i=0; i < N; i++){
		printf("Enter element no. %d ", i+1);
		scanf("%d", &arr[i]);
		printf("\n");
	}
	
	for(int i=0; i < N; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	int temp, freq;
	
	for (int i=0; i < N; i++){
		temp=arr[i];
		freq=0;
		int counted=0;
		
	    for(int j=0; j < N; j++){
		if (temp==arr[j]){
			freq++;
			 if(j < i){
			    counted = 1;
		    }
		}
	}
	if (counted == 0){
	    printf("Frequency of %d = %d \n", temp, freq);
	}
}	
	return 0;
} 