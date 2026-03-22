//1. Create a structure to specify data on students given below:
//Roll number, Name, Department, Course, Year of joining Assume that there are not more than 450
//students in the college.
//? Print names of all students who joined in a particular year.
//? Print the data of a student whose roll number is given.

#include <stdio.h>
#include <string.h>

int main(){
	struct student{
		int roll_no;
		char name[20];
		char dept[5];
		char course[15];
		int year;
	};
	
	struct student n[10];
	
	for(int i = 0; i < 10; i++){
		printf("Enter the name of student: ");
		scanf("%s",n[i].name);
		printf("Enter roll number: ");
		scanf("%d", &n[i].roll_no);
		printf("Enter department: ");
		scanf("%s",n[i].dept);
		printf("Enter course: ");
		scanf("%s",n[i].course);
		printf("Enter year of joining: ");
		scanf("%d", &n[i].year);
		printf("\n");
	}
	
	int part_year,giv_roll;
	
	printf("Enter year for no. of students in a particular year: ");
	scanf("%d", &part_year);
	
		for(int i = 0; i < 10; i++){
		if(n[i].year == part_year){
			printf("Students who joined in year %d: %s \n", part_year, n[i].name);
		}
	}
	
	printf("Enter roll number of student: ");
	scanf("%d", &giv_roll);
	for(int i = 0; i < 10; i++){
		if(giv_roll == n[i].roll_no){
			printf("Name: %s\n", n[i].name);
  			printf("Roll number: %d\n", n[i].roll_no);
			printf("Department: %s\n", n[i].dept);
			printf("Course: %s\n", n[i].course);
			printf("Year: %d\n", n[i].year);
		}
	}
	
	return 0;
}