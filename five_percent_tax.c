#include <stdio.h>

int main(void) {
    // amount, tax and result variable defined
    float amount, tax, result; 

    // Get the amount input
    printf("Enter an amount: ");
    scanf("%f", &amount);

    // Get the tax input 
    printf("Enter the tax amount: "); 
    scanf("%f", &tax);

    // Calculate the result 
    result = amount + (amount * (tax / 100.0f));

    // Display the result
    printf("The final amount after tax is %f$\n", result);

    // End the program
    return 0;
}