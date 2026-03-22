#include <stdio.h>

void reverse(int *arr, int size){
	int temp = 0;
	for(int i = 0; i < size/2; i++){
		temp = *(arr + i);
		*(arr + i) = *(arr + size - 1 - i);
		*(arr + size - 1 - i) = temp;
	}
	
	printf("Array after reverse\n");
	
	for(int i = 0; i < size; i++){
			printf("%d ", arr[i]);
	}

}

int main(){
	
	int size=10;
	int array[10];
	for(int i = 0; i < 10; i++){
		scanf("%d", &array[i]);
	}
	printf("Array before reverse \n");
	for(int i = 0; i < 10; i++){
		printf("%d ", array[i]);
	}
	printf("\n");
	
	reverse (array, size);
	
	}