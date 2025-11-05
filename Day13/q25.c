#include <stdio.h>

int main() {
    double num1, num2, result;
    char op;

    printf("  Simple Calculator\n");
    printf("---------------------------\n");

    // Input two numbers
    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Input operator
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);


    switch (op) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                result = num1 / num2;
                printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
            }
            break;

        case '%':
            if ((int)num2 == 0) {
                printf("Error: Modulo by zero is not allowed.\n");
            } else {
                printf("Result: %d %% %d = %d\n", (int)num1, (int)num2, (int)num1 % (int)num2);
            }
            break;

        default:
            printf("Invalid operator! Please use +, -, *, /, or %%.\n");
    }

    printf("---------------------------\n");
    printf("  Calculation complete.\n");

    return 0;
}
