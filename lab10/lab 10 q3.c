//Declare a 2D array of integers using ONLY POINTERS using calloc/malloc. The row and column
//dimensions will be taken as user input. Then, loop through this input array using ONLY POINTER
//SYNTAX (not arr[i][j]). You must print on the screen the total sum of ALL ROWS and ALL
//COLUMNS separately.
//Example Input:
//1 2 3
//4 5 6
//Example Output:
//Row #1 Sum = 6
//Row #2 Sum = 15
//Column #1 Sum = 5
//Column #2 Sum = 7
//Column #3 Sum = 9

#include <stdio.h>
#include <stdlib.h>
int main (){
	int rows=0, cols=0;
	
	printf("Enter the no. of rows: ");
	scanf("%d", &rows);
	
	printf("Enter the no. of columns: ");
	scanf("%d", &cols);
	
	int** ptr = (int**)calloc(rows, sizeof(int*));
	
	for(int i = 0; i < rows; i++){
		*(ptr + i) = (int*)calloc(cols, sizeof(int));
	}
	
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			scanf("%d", *(ptr + i) + j);
		}
		printf("\n");
	}
	
	int row_sum=0, col_sum=0;
	
	int i=0;
	for(i=0; i < rows; i++){
		row_sum=0;
		for(int j = 0; j < cols; j++){
			row_sum += *(*(ptr+i)+j);
		}
		printf("Row #%d Sum = %d\n", i+1, row_sum);
	}
	
	int j=0;
	for(int i = 0; i < cols; i++){
		col_sum=0;
		for(j=0; j < rows; j++){
			col_sum += *(*(ptr+j)+i);
		}
		printf("Column #%d Sum = %d\n", i+1, col_sum);
	}
	
	return 0;
}