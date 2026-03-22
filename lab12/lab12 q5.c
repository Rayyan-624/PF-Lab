//Write C Program that Reads a Text File and Counts the Number of Times a Certain Letter Appears
//in the Text File

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char str[100];
	
//	Storing text in files
	
	FILE *file;
	file = fopen("file5.txt", "w");
	
	if(file != NULL){
		fputs("I am storing this file in order to read it and count a certain alphabet given by user", file);
		fclose(file);
	}
	else{
		printf("File not created\n");
		exit(1);
	}
	
//	Reading text from the file

	char alphabet;
	printf("Enter which alphabet you want to count: ");
	scanf(" %c", &alphabet);
	
	file = fopen("file5.txt", "r");
	
	int count=0;
	
	if(file != NULL){
		while(fgets(str, sizeof(str), file) != NULL){
			for(int i = 0; i < strlen(str); i++){
				if(str[i] == alphabet){
					count++;
				}
			}
			printf("Alphabet %c appeared %d times\n", alphabet, count);
			if(count == 0){
				printf("Given alphabet does not occur\n");
			}
		}
		fclose(file);	
	}
	else{
		printf("Error opening file\n");
		exit(1);
	}
	
	return 0;
}