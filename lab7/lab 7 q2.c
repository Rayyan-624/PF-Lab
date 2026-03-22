#include <stdio.h>

int main(){
	int N, d, i=0;
	
	printf("How many elements do you want to enter? \n");
	scanf("%d", &N);
	
	int arr[N];
	
	for(i=0; i < N; i++){
		printf("Enter element no. %d: ", i+1);
		scanf("%d", &arr[i]);
		printf("\n");
	}
	for(i=0; i<N; i++){
		printf("%d ", arr[i]);
	}
	printf("\nHow many positions do you want to move towards left? \n");
	scanf("%d", &d);
	
	for (int i = 0; i < d; i++){
		int temp = arr[0];
		
		for (int j = 1; j < N ; j++){
			arr[j-1] = arr[j];
		}
		
		arr[N-1] = temp;
	}
	
	for(i=0; i<N; i++){
		printf("%d ", arr[i]);
	}
	return 0;
}