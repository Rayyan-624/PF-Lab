#include <stdio.h>
int main()
{
	int num, div=1, sum=0;
	
	printf("Enter the number \n");
	scanf("%d", &num);
		
    for(div=1; div<num; div++)
	{
		if(num%div==0){
	        sum+=div;
        }
    }
	if(sum==num){
		printf("It is a perfect number");
	}	
	else{
		printf("It is not a perfect number");
	}
return 0;
}