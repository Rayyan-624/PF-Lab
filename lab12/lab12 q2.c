//Write C program to read name and marks of n number of students from and store them in a file. If
//the file previously exits, add the information to the file.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	int n, marks;
	char name[20];
	
	int choice;
	printf("Press 1 for reading the file and 2 for adding the text\n");
	scanf("%d", &choice);
	FILE *ptr;
	switch (choice){
		case 2:
			printf("Enter number of students you want to add more: ");
			scanf("%d", &n);
 			ptr = fopen("file1.txt", "a");
 	
 			if(ptr != NULL){
 				for(int i = 0; i < n; i++){
 					fflush(stdin);
 					printf("Enter name of student %d: ", i+1);
					gets(name);
					printf("Enter marks: ");
					scanf("%d",&marks);
		
					fprintf(ptr,"Name: %s  Marks:  %d\n", name, marks);
				}
				fclose(ptr);
			}
			else{
				printf("File does not exist");
				exit(1);
			}
			break;
			
		case 1:
			ptr = fopen("file1.txt", "r");
			
			if(ptr != NULL){
			while(fscanf(ptr, "Name: %s  Marks: %d\n", name, &marks) != EOF){
				printf("Name: %s  Marks: %d\n", name, marks);
			}
			fclose(ptr);
			}
			else{
				printf("File does not exist");
				exit(1);
			}
			break;
		}
		return 0;
	}