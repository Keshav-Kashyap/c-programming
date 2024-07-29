#include <stdio.h>

int main() {
    int num1, num2, product;

    // User input for two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Multiply the numbers
    product = num1 * num2;

    // Display the result
    printf("Product of %d and %d is %d\n", num1, num2, product);

    return 0;
}
