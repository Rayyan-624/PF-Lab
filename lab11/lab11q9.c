//9. You need to implement the following 2 struct.
//struct Student{}; struct Register{};
//
//Student contains attributes StudentId, FirstName, LastName, cellno, email.
//Register contains the attributes CourseId, CourseName.
//Now you need to inherit the Register struct in Student struct. It means that the student struct holds the
//variable of Register struct variable. After that you need to take input for 5 students and then print them
//[Hint: Declare array of struct Student std[5]; for 5 students ]

#include <stdio.h>
#include <string.h>

struct Student{
	int StudentId;
	char FirstName[15];
	char LastName[15];
	int cellno;
	char email[20];
	
	struct Register{
	int CourseId;
	char CourseName[15];
    } reg ;
};

int main(){
	struct Student std[5];
	for(int i = 0; i < 5; i++){
		printf("Enter Student ID: ");
		scanf("%d", &std[i].StudentId);
		printf("Enter First Name: ");
		scanf(" %s", std[i].FirstName);
		printf("Enter Last Name: ");
		scanf(" %s", std[i].LastName);
		printf("Enter Cell number: ");
		scanf("%d", &std[i].cellno);
		printf("Enter email: ");
		scanf(" %s", std[i].email);
		printf("Enter Course ID: ");
		scanf("%d", &std[i].reg.CourseId);
		printf("Enter Course Name: ");
		scanf(" %s", std[i].reg.CourseName);
	}
	
	for(int i = 0; i < 5; i++){
		printf("\nStudent ID: %d\n", std[i].StudentId);
		printf("First Name: %s\n", std[i].FirstName);
		printf("Last Name: %s\n", std[i].LastName);
		printf("Cell number: %d\n", std[i].cellno);
		printf("Email: %s\n", std[i].email);
		printf("Course ID: %d\n", std[i].reg.CourseId);
		printf("Course Name: %s\n\n", std[i].reg.CourseName);
	}
	
	
	return 0;
}