//Write a C program that uses a user-defined function to determine if a given number is a palindrome or not. The
//program should prompt the user to enter an integer, and then use the function to check if the number is a
//palindrome. If the number is a palindrome, the function should return 1, and if it&#39;s not a palindrome, the function
//should return 0. The program should then display the result.
//A palindrome number is one that remains the same when its digits are reversed. For example, 121 and 1331 are
//palindromes, but 123 and 4567 are not.

#include <stdio.h>

int checkpalin (int num)
{
	int orig_num = num;
	int rev = 0;
	
	while(num > 0){
		rev = rev * 10 + num % 10;
		num = num / 10;
	}
		if(orig_num == rev){
			return 1;
		}
		else {
			return 0;
		}
	}
	
int main(){
	int num;
	
	printf("Enter the number to be checked: ");
	scanf("%d", &num);
	
	if(checkpalin(num)){
		printf("%d is a palindrome number \n", num);
	}
	else {
		printf("%d is not a palindrome number \n", num);
	}
	return 0;
}
