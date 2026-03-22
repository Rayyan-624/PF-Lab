#include <stdio.h>
#include <string.h>

void authenticateUser(){
	
	char pass[22];
	
	printf("Enter the password: ");
	gets(pass);
	
	if (strlen(pass) < 8 || strlen(pass) > 22){
		printf("Invalid input");
		return 0;
	}
	else if(strlen(pass) <= 12){
		printf("Weak password");
	}
	else if(strlen(pass) <= 16){
		printf("Medium password");
	}
	else {
		printf("Strong password");
	}
	
	int ret;
	char pass2[22];
	printf("\nlogin your password: ");
	gets(pass2);
	
	ret = strcmp(pass, pass2);
	
	if(ret == 0){
		printf("\nLogin successful");
	}
	else {
		printf("\nLogin failed");
	}
}

int main(){
	authenticateUser();
}