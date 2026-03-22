// A)
// The value of 'a' is stored in 'tmp' variable, but later on 'b' has been assigned with the value of 'a' instead of 'tmp' value.
// Also the values have been passed but not their adresses due to which j and k won't be swapped as no change could be done in them outside the main




// B)

#include <stdio.h>

void swap(int *a, int *b){
	int temp=0;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	
	int j = 2, k = 5;
	printf("j = %d , k = %d \n", j, k);
	swap(&j, &k);
	printf("j = %d , k = %d \n", j, k);
	
	return 0;
}