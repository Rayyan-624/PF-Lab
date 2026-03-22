#include <stdio.h>
#include <string.h>

int main()
{
	char name[80];
	
	printf("Enter your name: ");
	gets(name);
//	Searching for y in my name
	int count=0;
	
	for (int i=0; i < strlen(name); i++){
		if(name[i] == 'y'){
			count++;
		}
	}
	
	printf("\ncharacter 'y' appeared %d times", count);
	
	
	return 0;
}