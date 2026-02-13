/* Author: Mani Obara
 * Purpose: calculate the volume of an sphere
 */

#include <stdio.h>

// Define the constant of pi which will be used in our calculation
#define pi 3.14f

// Define the program's main function 
int main(void) 
{
    // Define 2 variables for volume(result) and radius 
    float volume, radius;

    // Get radius from the user as an input
    printf("Enter the radius: ");
    scanf("%f", &radius);

    // Caculate the result
    volume = 4.0f / 3.0f * pi * (radius * radius * radius); 
    
    // Show the end result
    printf("The answer is: %f\n", volume);

    // End the program
    return 0;
}