#include <stdio.h>

int main() {
    char op;
    double num1, num2;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter operator (+, -, *, /, %% ): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    if (op == '+') {
        printf("Result: %.2lf\n", num1 + num2);
    }
    else if (op == '-') {
        printf("Result: %.2lf\n", num1 - num2);
    }
    else if (op == '*') {
        printf("Result: %.2lf\n", num1 * num2);
    }
    else if (op == '/') {
        if (num2 != 0) {
            printf("Result: %.2lf\n", num1 / num2);
        } else {
            printf("Error: Division by zero!\n");
        }
    }
    else if (op == '%') {
        if (num2 != 0) {
            printf("Result: %.2lf\n", fmod(num1, num2)); 
        } else {
            printf("Error: Division by zero!\n");
        } 
    }       
    else {
        printf("Invalid operator!\n");
    }

    return 0;
}
