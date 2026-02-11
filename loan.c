#include <stdio.h>

int main(void) {
    // Define needed variables
    float loan_amount, monthly_payment, interest_rate, first_month_balance_remaining,
    second_month_balance_remaining, thrid_month_balance_remaining; 

    // initialize variables
    // Start with getting input for loan amount
    printf("Enter the loan amount: ");
    scanf("%f", &loan_amount); 
    
    // Get input for interest rate 
    printf("Enter the interest rate: ");
    scanf("%f", &interest_rate); 

    // Get input for monthly payment amount
    printf("Enter the monthly payment: ");
    scanf("%f", &monthly_payment);

    // Calculate balance after each month
    first_month_balance_remaining = (loan_amount - monthly_payment) + ((interest_rate / 100.0f) / 12.0f);
    second_month_balance_remaining = (first_month_balance_remaining - monthly_payment) + ((interest_rate / 100.0f) / 12.0f);
    thrid_month_balance_remaining = (second_month_balance_remaining - monthly_payment) + ((interest_rate / 100.0f) / 12.0f);

    // Display the result
    printf("Balance remaining after first payment: %f\n", first_month_balance_remaining);
    printf("Balance remaining after second payment: %f\n", second_month_balance_remaining); 
    printf("Balance remaining after third payment: %f\n", thrid_month_balance_remaining); 

    // End the program
    return 0;
}