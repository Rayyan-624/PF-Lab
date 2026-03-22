#include <stdio.h>

int main()
{
	int X, Y;
	
	printf("Enter the value of total branches: ");
	scanf("%d", &X);
	printf("Enter the value of total mobiles: ");
	scanf("%d", &Y);
	
	int bill_amount[X][Y];
	
	for(int branch=0; branch < X;  branch++){
		
		for (int mob=0; mob < Y; mob++){
			printf("Enter bill amount of branch %d and its mobile %d: ", branch+1, mob+1);
			scanf("%d", &bill_amount[branch][mob]);
			printf("\n");
		}
	}                    
	int total_bill=0;
	int branch_totals[X];
	
	for(int branch=0; branch < X; branch++){
		branch_totals[branch]=0;
		for (int mob=0; mob < Y; mob++){
			branch_totals[branch] += bill_amount[branch][mob];
			total_bill += bill_amount[branch][mob];
		}
	} 
	
	int max_bill=0, max_branch, max_mob;
	int max_overall = -1;
	for(int branch=0; branch < X; branch++){
		max_bill = 0;
		for (int mob=0; mob < Y; mob++){
			if(bill_amount[branch][mob] > max_bill){
				
				if(max_bill > max_overall){
					max_branch = branch+1;
				}
				max_bill = bill_amount[branch][mob];
				max_mob = mob+1;
			}
	    }
	    printf("Max bill for Branch ID: %d is for Mobile ID: %d \n", branch+1, max_mob);
	    
    } 
    printf("The max overall bill is in %d branch\n", max_branch);
    printf("The total bill is %d \n", total_bill);
    
    for(int i=0; i < X; i++){
    	printf("Total bill for branch %d is %d \n", i+1, branch_totals[i]);
	}
	
	return 0;
}