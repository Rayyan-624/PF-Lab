#include <stdio.h>

int decideCarUsage(int num, int day){
	
	if (num % 2 == 0 && day % 2 == 0){
		return 1;
	}
	else if (num % 2 != 0 && day % 2 != 0){
		return 1;
	}
	else {
		return 0;
	}
   }


int main(){
	
	int day, num;
    printf("Enter the car number: ");
	scanf("%d", &num);	
	printf("\nEnter the day of the week: ");
	scanf("%d", &day);
	
	int x = decideCarUsage(num, day);
	printf("%d", x);
}
