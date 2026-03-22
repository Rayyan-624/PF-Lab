#include <stdio.h>
#include <conio.h>

int main()
{
	int rows=3, cols=3;
	int arr[rows][cols];
	int i=0,j=0, flag=0;
	
	printf("Input the array \n");
	
	for(i=0; i<rows; i++){
		for(j=0; j<cols; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	printf("\n");
	
	for(i=0; i<rows; i++){
		    for(j=0; j<cols; j++){
			if(arr[i][j]!=arr[j][i]){
				flag=1;
				break;
			}
			if(flag==1){
				break;
			}
		}
		if (flag==0){
			printf("Array is Symmetric \n");
			for(i=0; i<rows; i++){
		        for(j=0; j<cols; j++){
			    printf("%d \t", arr[i][j]);
		}    
		printf("\n");
	}
	}
		else {
		printf("Array is not symmetric \n");
		for(i=0; i<rows; i++){        
		for(j=0; j<cols; j++){
			printf("%d \t", arr[i][j]);
		}
		printf("\n");
	    }
}
}
	return 0;	

}