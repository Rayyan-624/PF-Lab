#include <stdio.h>

int main(){
	int i;
	
	for(i=0; i<7; i++){
		if(i%2!=0){
			printf("\t");
			printf("%d\t%d",i,i);
			printf("\n");
		}
		else {
		printf("%d\t%d\t%d\t%d",i,i,i,i);
		printf("\n");
	}
	}
return 0;
}