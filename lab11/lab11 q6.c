#include <stdio.h>

struct Date{
		int day;
		int month;
		int year;
	};
	
int main(){
		struct Date date = {30, 11, 2023};
		
		printf("Current date is \n");
		printf("%d / %d / %d\n", date.day, date.month, date.year);
		
		
		int addDays=0;
		printf("Enter the days you want to add in current date: ");
		scanf("%d", &addDays);
		
		for (int i=addDays; i > 0; i--){
			date.day += 1;
			if(date.day > 30){
				date.day = 1;
				date.month += 1;
				
				if (date.month > 12){
					date.month = 1;
					date.year += 1;
				}
			}
		}
		
		printf("New date will be \n");
		printf("%d / %d / %d", date.day, date.month, date.year);
		
		return 0;
}