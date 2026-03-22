//C program to write all the members of an array of structures to a file using fwrite(). Read the array
//from the file and display on the screen.

#include <stdio.h>
#include<string.h>
#include <stdlib.h>


struct Product{
	char name[20];
	int code;
	float price;
};

int main(){
	struct Product prod[3];
	
	FILE *file;
	file = fopen("file3.bin", "wb");
	
	if(file != NULL){
	for(int i = 0; i < 3; i++){
		fflush(stdin);
		printf("Enter %d product name: ", i+1);
		gets(prod[i].name);
		printf("Enter code: ");
		scanf("%d", &prod[i].code);
		printf("Enter price: ");
		scanf("%f", &prod[i].price);
		printf("\n");
	}
	fwrite(prod, sizeof(struct Product), 3, file);	
	fclose(file);
    }
    else{
    	printf("File does not exist\n");
    	exit(1);
	}
	
	file = fopen("file3.bin", "rb");
	
	if(file != NULL){
		struct Product temp[3];
		fread(temp, sizeof(struct Product), 3, file);
	
		fclose(file);
		
		for(int i = 0; i < 3; i++){
			printf("Product %d Name: %s\n", i+1, temp[i].name);
			printf("Code: %d\n", temp[i].code);
			printf("Price: %.1f\n", temp[i].price);
		}
	}
	else{
		printf("Error opening the file\n");
		exit(1);
	}
	
	return 0;
}