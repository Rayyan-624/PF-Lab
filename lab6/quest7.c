#include <stdio.h>

int main()
{
	int n, i;
	printf("Enter the number of elements \n");
	scanf("%d", &n);
	
	int var[n];
	
	for(i=0; i<n; i++){
		scanf("%d", &var[i]);
	}
	for(i=n; i<0; i--){
		printf("%d", var[i]);
	}
	
return 0;
}