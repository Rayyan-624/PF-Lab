#include <stdio.h>
int main() 
{
    int num1, num2, GCD, LCM, div;
    
    
    // Taking Input
    printf("Enter the first number: \n");
    scanf("%d", &num1);
    printf("Enter the second number: \n");
    scanf("%d", &num2);

    // Finding GCD
    for (div = 1; div <= num1 && div <= num2; div++) {
        if (num1 % div == 0 && num2 % div == 0) {
            GCD = div;
        }
    }

    // Finding LCM
    LCM = (num1 * num2) / GCD;
    
    
    // Printing the output
    printf("The GCD of %d and %d is %d \n", num1, num2, GCD);
    printf("The LCM of %d and %d is %d \n", num1, num2, LCM);

    return 0;
}