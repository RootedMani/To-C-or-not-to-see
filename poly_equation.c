/* Author: Mani Obara
 * Purpose: calculates the result of a polynomial equation
 */

#include <stdio.h>

int main(void) {
    // Define the x and result variable
    float x, result;

    // Get an input for the x variable from the user
    printf("Enter the x variable: "); 
    scanf("%f", &x); 

    // Calculate the result 
    result = (3.0f * (x * x * x * x * x)) + (2.0f * (x * x * x * x)) - (
        5.0f * (x * x * x)) - (x * x) + (7.0f * x) - 6.0f;

    // Display the result 
    printf("%g\n", result); 

    // End the program
    return 0;
}