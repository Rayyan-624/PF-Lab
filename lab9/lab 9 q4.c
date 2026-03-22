#include <stdio.h>
#include <stdlib.h>

int main(){
	int N; 
	printf("Enter the value of N: \n");
	scanf("%d", &N);
	
	int intArr[N];
	char charArr[N];
	long longArr[N];
	int *p1;
	char *p2;
	long *p3;
	
	
	for(int i = 0; i < N; i++){
		intArr[i] = rand();
		charArr[i] = rand();
		longArr[i] = rand();
	}
		p1 = intArr;
	    p2 = charArr;
	    p3 = longArr;
	
    printf("Addresses and values of intArr \n");
	
	for(int i = 0; i < N; i++){
		printf("Addresses: %p , Value: %d\n", p1[i], *(p1 + i));
	}
    
    printf("Addresses and values of charArr \n");
	
	for(int i = 0; i < N; i++){
		printf("Addresses: %p , Value: %c\n", p2[i], *(p2 + i));
	}
	
	printf("Addresses and values of longArr \n");
	
	for(int i = 0; i < N; i++){
		printf("Addresses: %p , Value: %lld\n", p3[i], *(p3 + i));
	}
	
	return 0;
}

// Explanation

//	  Pointer arithmetic is based on the size of the data type. When you add an integer value to a pointer,
//    it increments the pointer by the size of the data type it points to. Therefore, adding 1 to a char pointer
//    will move it by 1 byte, adding 1 to an int pointer will move it by 4 bytes, and
//    adding 1 to a long long pointer will move it by 8 bytes.