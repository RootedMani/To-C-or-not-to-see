#include <stdio.h>

int main(void) {
    // Define the x and result variable
    float x, result;

    // Get an input for the x variable from the user
    printf("Enter the x variable: "); 
    scanf("%f", &x); 

    // Calculate the result 
    result = ((((3.0f * x + 2.0f) * x - 5.0f) * x - 1.0f) * x + 7.0) * x - 6.0f;

    // Display the result 
    printf("%f\n", result); 

    // End the program
    return 0;
}