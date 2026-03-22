#include <stdio.h>

int main(){
	
	int num=0, *ptr1, **ptr2;
	printf("Enter the number: \n");
	scanf("%d", &num);
	printf("Before---> number: %d\n", num);
	
	ptr1 = &num;
	ptr2 = &ptr1;
	
//	Changing the value
    **ptr2 = 10;
    
	printf("After---> number: %d\n", num);
	
	return 0;
	
}