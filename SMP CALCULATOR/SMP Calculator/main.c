#include <stdio.h>
#include <stdlib.h>

int main()
{
    char operator;
    double num1, num2, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);   // space before %c is IMPORTANT

    printf("Enter first value: ");
    scanf("%lf", &num1);

    printf("Enter second value: ");
    scanf("%lf", &num2);

    if (operator == '+') {
        result = num1 + num2;
        printf("Result: %.2lf\n", result);

    } else if (operator == '-') {
        result = num1 - num2;
        printf("Result: %.2lf\n", result);

    } else if (operator == '*') {
        result = num1 * num2;
        printf("Result: %.4lf\n", result);

    } else if (operator == '/') {
        if (num2 == 0) {
            printf("Error: Division by zero is not allowed.\n");
        } else {
            result = num1 / num2;
            printf("Result: %.4lf\n", result);
        }

    } else {
        printf("Please put a valid operator (+, -, *, /).\n");
    }

    return 0;
}
