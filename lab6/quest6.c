#include<stdio.h>

int main(){
	int num, i, sum=0;
	
	printf("Enter the number of elements \n");
	scanf("%d", &num);
	
	int var[num];
	
	for(i=0; i<num; i++){
		printf("Enter the element \n");
		scanf("%d", &var[num]);
		sum=sum+var[num];
	}
	printf("the sum of elements is %d", sum);
	return 0;
}