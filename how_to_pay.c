/* Author: Mani Obara
 * Purpose: calculates how many 20, 10, 5 and one dollar bill should you
 * pay to pay the full amount.
 */

#include <stdio.h>

int main(void) {
    // define the amount, $20, $10, $5, and $1 bills variable as an integer
    int amount, twenty_bill, ten_bill, five_bill, one_bill;

    // Get the input and initialize for the amount varible 
    printf("Enter the US dollar amount: "); 
    scanf("%d", &amount);

    // Calculate how many of each bill should be paid
    twenty_bill = amount / 20; 
    amount = amount - (twenty_bill * 20); 
    ten_bill = amount / 10;
    amount = amount - (ten_bill * 10); 
    five_bill = amount / 5; 
    amount = amount - (five_bill * 5);  // Fixed: using five_bill    one_bill = amount / 1; 

    // Display the results
    printf("$20 bill: %d\n", twenty_bill);
    printf("$10 bill: %d\n", ten_bill);
    printf("$5 bill: %d\n", five_bill);
    printf("$1 bill: %d\n", one_bill);

    // End the program
    return 0;
}