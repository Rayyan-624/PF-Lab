#include <stdio.h>

int main()
{
	int start=0, last=0, count, Fizz=0, Buzz=0, FizzBuzz=0;
	
	printf("Enter the starting number \n");
	scanf("%d", &start);
	printf("Enter the last number \n");
	scanf("%d", &last);
	
	for (count=start; count<=last; count++)
	{
        if ((count%3==0)&&(count%5==0)){
		FizzBuzz++;
		Fizz++;
		Buzz++;
	    }
	    else if(count%3==0){
		Fizz++;
    	}
     	else if(count%5==0){
		Buzz++;
    	}
	}
	
    printf("Fizz = %d \n", Fizz);
    printf("Buzz = %d \n", Buzz);
    printf("Fizz-Buzz = %d \n", FizzBuzz);
    
return 0;
}