#include <stdio.h>

int main() {
    // Declare variables for the two numbers and the result
    float num1, num2, result;

    // Ask the user to input the first number
    printf("Enter the first number: ");
    scanf("%f", &num1);

    // Ask the user to input the second number
    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Check if the second number is zero to avoid division by zero
    if (num2 == 0) {
        printf("Error! Division by zero is not allowed.\n");
    } else {
        // Perform the division
        result = num1 / num2;
        // Display the result
        printf("The result of %.2f / %.2f is %.2f\n", num1, num2, result);
    }

    return 0;
}
