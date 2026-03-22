#include <stdio.h>
#include <conio.h>

int main()
{
	char type, size;

	printf("Welcome! \n");
	
	printf("Press B for Black and W for White coffee \n");
	scanf(" %c",&type);
	
	switch (type){
		case 'W':{
		   	float water_w=15, sugar_w=15, mix1_w=20, coffee_w=2, milk_w=4, mix2_w=20;
	   		printf("Press D for double-sized cup and M for manual-sized cup \n");
	        scanf(" %c",&size);
	    switch (size){
	    	case 'D':
	    		water_w=1.5*water_w, sugar_w=1.5*sugar_w, mix1_w=1.5*mix1_w, coffee_w=1.5*coffee_w, milk_w=1.5*milk_w, mix2_w=1.5*mix2_w;
	    	    	printf("Put Water \t\t %.1f \n", water_w);
	                printf("Sugar \t\t\t %.1f \n", sugar_w);
                	printf("Mix Well  \t\t %.1f \n", mix1_w);
                   	printf("Add coffee\t\t %.1f \n", coffee_w);
	                printf("Add Milk  \t\t %.1f \n", milk_w);
	                printf("Mix Well  \t\t %.1f \n", mix2_w);
	                break;
	        default:
			   	    printf("Put Water \t\t %.1f \n", water_w);
	                printf("Sugar \t\t\t %.1f \n", sugar_w);
                	printf("Mix Well  \t\t %.1f \n", mix1_w);
                   	printf("Add coffee\t\t %.1f \n", coffee_w);
	                printf("Add Milk  \t\t %.1f \n", milk_w);
	                printf("Mix Well  \t\t %.1f \n", mix2_w);
	                break;
	            }
	        break;    
	}
		case 'B':{
			float water_b=20, sugar_b=20, mix1_b=25, coffee_b=15, milk_b=0, mix2_b=25;
			printf("Press D for double-sized cup and M for manual-sized cup \n");
	        scanf(" %c",&size);
	    switch (size){
	    	case 'D':
	    		water_b=1.5*water_b, sugar_b=1.5*sugar_b, mix1_b=1.5*mix1_b, coffee_b=1.5*coffee_b, milk_b=1.5*milk_b, mix2_b=1.5*mix2_b;
	    			printf("Put Water \t\t %.1f \n", water_b);
	                printf("Sugar \t\t\t %.1f \n", sugar_b);
                	printf("Mix Well  \t\t %.1f \n", mix1_b);
                   	printf("Add coffee\t\t %.1f \n", coffee_b);
	                printf("Add Milk  \t\t %.1f \n", milk_b);
	                printf("Mix Well  \t\t %.1f \n", mix2_b);
	                break;
	        default:
			   	    printf("Put Water \t\t %.1f \n", water_b);
	                printf("Sugar \t\t\t %.1f \n", sugar_b);
                	printf("Mix Well  \t\t %.1f \n", mix1_b);
                   	printf("Add coffee\t\t %.1f \n", coffee_b);
	                printf("Add Milk  \t\t %.1f \n", milk_b);
	                printf("Mix Well  \t\t %.1f \n", mix2_b);
					break;
				}
			break;
		}
	   
	default:
		printf("Invalid Input");
}	
    return 0;
}