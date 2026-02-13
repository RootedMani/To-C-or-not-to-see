/* Author: Mani Obara
 * Purpose: Calculates the final price after adding a tax percentage to an initial amount
 */

#include <stdio.h>

int main(void) {
    // Declare variables for the initial amount, tax rate, and final result
    float amount, tax, result; 

    // Prompt user and store the initial monetary amount
    printf("Enter an amount: ");
    scanf("%f", &amount);

    // Prompt user and store the tax percentage (e.g., 5 for 5% tax)
    printf("Enter the tax amount: "); 
    scanf("%f", &tax);

    // Calculate total by adding tax percentage to original amount
    // Formula: amount + (amount * tax_rate_as_decimal)
    result = amount + (amount * (tax / 100.0f));

    // Display the final amount with tax included
    printf("The final amount after tax is %f$\n", result);

    return 0; // Indicate successful program completion
}