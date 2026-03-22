#include <stdio.h>
#include <math.h>

int main() {
    int account_number, num_of_months,mortgage_term;
    double mortgage_amount, interest_rate, total_interest, total_amount, monthly_amount, monthly_payment;
    
    printf("Enter account number (-1 to end): \n");
    scanf("%d", &account_number);

    if (account_number >=0) {
        printf("Enter mortgage amount (in dollars): \n");
        scanf("%lf", &mortgage_amount);

        printf("Enter mortgage term (in years): \n");
        scanf("%d", &mortgage_term);

        printf("Enter interest rate (as a decimal): \n");
        scanf("%lf", &interest_rate);

        total_interest = mortgage_amount * interest_rate * mortgage_term;
        total_amount = mortgage_amount + total_interest;

        num_of_months = mortgage_term * 12;
        monthly_payment = round(total_amount / num_of_months);

        printf("The monthly payable interest is: $ %.lf\n", monthly_payment);
    }
    else{
        printf("Invalid input \n");
    }

    return 0;
}
