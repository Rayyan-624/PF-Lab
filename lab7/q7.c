#include <stdio.h>

int main(){
	
	int matrix_A[2][2], matrix_B[2][2], matrix_C[2][2];
	int i=0,j=0,k=0;
	
	printf("Enter the elements of Matrix A \n\n");
		
	for(i=0;i<2; i++){
		for(j=0; j<2; j++){
		printf("Enter element [%d][%d]: ", i,j);
		scanf("%d", &matrix_A[i][j]);
		printf("\n");
        }
	}
	printf("Enter the elements of Matrix B \n\n");
	
	for(i=0;i<2; i++){
		for(j=0; j<2; j++){
		printf("Enter element [%d][%d]: ", i,j);
		scanf("%d", &matrix_B[i][j]);
		printf("\n");
        }
	}
	
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			matrix_C[i][j]=0;
			for(k=0; k<2; k++){
				matrix_C[i][j] += matrix_A[i][k] * matrix_B[k][j];
			}
		}
	}
	
	printf("Multiplied Matrix C: \n");
	for(i=0;i<2; i++){
		for(j=0; j<2; j++){
		printf("%d \t", matrix_C[i][j]);
        }
        printf("\n");
    }
	
	return 0;
}