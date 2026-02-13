/* Author: Mani Obara
 * Purpose: Evaluates a 5th-degree polynomial using Horner's method (nested multiplication)
 * for efficient computation with fewer operations
 */

#include <stdio.h>

int main(void) {
    // Declare variable for user input and the calculated result
    float x, result;

    // Prompt user to enter the value for the polynomial variable
    printf("Enter the x variable: "); 
    scanf("%f", &x); 

    // Evaluate polynomial 3x⁵ + 2x⁴ - 5x³ - x² + 7x - 6 using Horner's method
    // Nested multiplication reduces operations and improves efficiency
    result = ((((3.0f * x + 2.0f) * x - 5.0f) * x - 1.0f) * x + 7.0) * x - 6.0f;

    // Output the calculated polynomial result
    printf("%f\n", result); 

    return 0; // Indicate successful program completion
}