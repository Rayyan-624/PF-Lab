#include <stdio.h>
#include <conio.h>
#include <math.h>

int main ()
{
	float pos_wolfA, pos_wolfB, pos_sheep, dist1, dist2;
	
	printf("Enter the position of sheep: ");
	scanf("%f", &pos_sheep);
	printf("Enter the position of Wolf A: ");
	scanf("%f", &pos_wolfA);
	printf("Enter the position of Wolf B: ");
	scanf("%f", &pos_wolfB);
	
	dist1 = abs(pos_sheep - pos_wolfA);
	dist2 = abs(pos_sheep - pos_wolfB);
	
	if(dist1 < dist2){
		printf("Wolf A");
	}
	else if(dist1 == dist2){
		printf("Wolves distracted, sheep escaped");	
	}
	else{
		printf("Wolf B");
	}
	
	return 0;
}