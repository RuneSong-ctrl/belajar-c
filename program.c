#include <stdio.h>

int main() {
    // Declaration of variables
    int number;
    
    // Input: Asking user for a number
    printf("Enter a number: ");
    scanf("%d", &number);  // Taking integer input from the user
    
    // Conditional Statement: Check if the number is positive or negative
    if (number > 0) {
        printf("The number is positive.\n");
    } else if (number < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    // Loop: Counting from 1 to the input number
    printf("Counting from 1 to %d:\n", number);
    for (int i = 1; i <= number; i++) {
        printf("%d ", i);
    }

    printf("\nProgram has ended.\n");  // Ending message
    return 0;  // Returning 0 to indicate successful execution
}
