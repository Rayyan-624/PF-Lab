//Write a structure to store the names, salary and hours of work per day of 10 employees in a
//company. Write a program to increase the salary depending on the number of hours of work per
//day as follows and then print the name of all the employees along with their final salaries.
//? Hours of work per day 8      10      >=12
//? Increase in salary   $50    $100     $150

#include <stdio.h>
#include <string.h>

struct work{
	char name[20];
	int sal;
	float hours;
};

int main(){
	struct work emp[10];
	
	for(int i = 0; i < 10; i++){
		printf("Enter employee name: ");
		scanf(" %s", emp[i].name);
		printf("Enter salary: ");
		scanf("%d", &emp[i].sal);
		printf("Enter hours worked per day: ");
		scanf("%f", &emp[i].hours);
		if(emp[i].hours >= 12){
			emp[i].sal += 150;
		}
		else if(emp[i].hours > 10){
			emp[i].sal += 100;
		}
		else if(emp[i].hours > 8){
			emp[i].sal += 50;
		}
	}
	
	for(int i = 0; i < 10; i++){
		printf("Name: %s  Salary: %d\n", emp[i].name, emp[i].sal);
	}
	
	return 0;
}