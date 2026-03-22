//Write a C program to read name and marks of n number of students and store them in a file

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	int n, marks;
	char name[20];
	
	printf("Enter total number of students: ");
	scanf("%d", &n);
	
 	FILE *ptr; 
 	ptr = fopen("file1.txt", "w");
 	for(int i = 0; i < n; i++){
 		fflush(stdin);
 		printf("Enter name of student %d: ", i+1);
		gets(name);
		printf("Enter marks: ");
		scanf("%d", &marks);
		fprintf(ptr,"Name: %s  Marks:  %d\n", name, marks);
 		
	}
	fclose(ptr);
	
	return 0;
}
 	