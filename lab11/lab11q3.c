//3. Write a program to compare two dates entered by the user. Make a structure named Date to store
//the elements day, month and year to store the dates. If the dates are equal, display 'Dates are equal'
//otherwise display 'Dates are not equal'.

#include <stdio.h>

int main(){
	struct date{
		int day;
		int month;
		int year;
	};
	
	struct date n[2];
	
	for(int i = 0; i < 2; i++){
		printf("Enter day: ");
		scanf("%d", &n[i].day);
		printf("Enter month: ");
		scanf("%d", &n[i].month);
		printf("Enter year: ");
		scanf("%d", &n[i].year);
	}
	
	if(n[0].day == n[1].day && n[0].month == n[1].month && n[0].month == n[1].month){
		printf("Dates are equal");
	}
	else{
		printf("Dates are not equal");
	}
	
	return 0;
}