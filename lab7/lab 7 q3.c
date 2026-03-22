#include <stdio.h>

int main(){
	
	int num;
	int sum=0, res=0;
	
	printf("Enter the number: ");
	scanf("%d", &num);
	
	while (num>0){
		res=num%10;
		sum+=res;
		num=num/10;
	}
	printf("%d", sum);	
	
	return 0;
}