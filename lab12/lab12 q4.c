/*Write a C program to create 2 text files and store some text inside them. 
Then read these 2 files into the program and merge the text into a 3rd text file.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char str1[100];
	char str2[100];
	
	//	Storing data in files 
	
	//	File 1
	
	FILE *file1;
	file1 = fopen("file4a.txt", "w");

	if(file1 != NULL){
		fputs("Text from first file\n", file1);
		fclose (file1);
		}
	else {
		printf("Cannot open file\n");
		exit(1);
	}
	
//	File 2
	
	FILE *file2;
	file2 = fopen("file4b.txt", "w");
	
	if(file2 != NULL){
		fputs("Text from second file\n", file2);
		fclose (file2);
		}
	else {
		printf("Cannot open file\n");
		exit(1);
	}
	
//	Reading files into the program

//	File 1
	
	file1 = fopen("file4a.txt", "r");
	
	if(file1 != NULL){
		while(fgets(str1, sizeof(str1), file1) != NULL){
			printf("%s", str1);
		}
		fclose(file1);
	}
	else{
		printf("File not found\n");
		exit(1);
	}
	
//	File 2

	file2 = fopen("file4b.txt", "r");
	
	if(file2 != NULL){
		while(fgets(str2, sizeof(str2), file2) != NULL){
			printf("%s", str2);
		}
		fclose(file2);
	}
	else{
		printf("File not found\n");
		exit(1);
	}
	
//	Merging strings
	
	char merged[200];
	strcpy(merged, str1);
	strcat(merged, str2);
	
	printf("\nMerged string is\n%s", merged);
	
//	Storing merged strings in a new file

	FILE *file3;
	
	file3 = fopen("file4c.txt", "w");
	
	if(file3 != NULL){
		fputs(merged, file3);
		fclose(file3);
	}
	else{
		printf("File cannot be opened\n");
		exit(1);
	}
	return 0;
}