//Design a program in C that manages records of students' exam scores for six subjects. Create a
//structure to represent a students' details including their name, roll number, marks in each subject, and
//total marks. Implement functions to:
//Input the number of students and their details.
//Calculate the total marks for each student.
//Display the details of all students including their total marks.

#include <stdio.h>
#include <string.h>

int main(){
	struct student{
		char name[15];
		int roll_no;
		float marks[6];
		float total_marks;
	};
	

	
	int n;
	printf("Enter total no. of students: ");
	scanf("%d", &n);
    	struct student stud[n];
	
	for(int i = 0; i < n; i++){
		printf("Enter the name of student: ");
		scanf(" %s",stud[i].name);
		printf("Enter roll number: ");
		scanf("%d", &stud[i].roll_no);
		for(int j = 0; j < 6; j++){
			printf("Enter marks in subject %d: ", j+1);
			scanf("%f", &stud[i].marks[j]);
			stud[i].total_marks += stud[i].marks[j];
		}
	}
	
	for(int i = 0; i < n; i++){
		printf("Name: %s\n", stud[i].name);
  		printf("Roll number: %d\n", stud[i].roll_no);
  		for(int j = 0; j < 6; j++){
			printf("Marks in subject %d: %.1f \n", j+1, stud[i].marks[j]);
		}
		printf("Total marks: %.1f\n", stud[i].total_marks);
	}
	
	return 0;
}