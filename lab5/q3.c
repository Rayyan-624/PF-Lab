#include <stdio.h>
#include <conio.h>

int main()
{
	float amount, amount_saved, amount_aft_disc, disc;
	
	printf("Enter the amount: \n");
	scanf("%f", &amount);
	

	if(amount<0){
		printf("Invalid Input");
	}
	else if (amount>1999 && amount<=4000){
		disc=0.2*amount;
	}
	else if (amount>4000 && amount<=6000){
		disc=0.3*amount;
	}
	else if (amount>6000){
		disc=0.5*amount;
	}
	else{
		printf("No discount \n");
	}
	
	printf("Discount: %.1f \n", disc);
	
	amount_aft_disc=amount-disc;
	
	printf("Actual amount : %.1f \n", amount);
	printf("Amount saved : %.1f \n", disc);
	printf("Amount after discount : %.1f", amount_aft_disc);
	
	return 0;
}
