#include <stdio.h>
#include <math.h> // include math library for sin, cos, tan, log, and pow functions

int main()
{
    double num1, num2, result;
    char operator;

    printf("Enter an operator (+, -, *, /, s, c, t, l, p): ");
    scanf("%c", &operator);

    if (operator == 's' || operator == 'c' || operator == 't' || operator == 'l')
    {
        // if operator is 's', 'c', 't', or 'l', only one operand is needed
        printf("Enter an operand (in radians): ");
        scanf("%lf", &num1);
    }
    else
    {
        // if operator is +, -, *, /, or 'p', two operands are needed
        printf("Enter two operands: ");
        scanf("%lf %lf", &num1, &num2);
    }

    switch(operator)
    {
        case '+':
            printf("%.1lf + %.1lf = %.1lf", num1, num2, num1 + num2);
            break;

        case '-':
            printf("%.1lf - %.1lf = %.1lf", num1, num2, num1 - num2);
            break;

        case '*':
            printf("%.1lf * %.1lf = %.1lf", num1, num2, num1 * num2);
            break;

        case '/':
            printf("%.1lf / %.1lf = %.1lf", num1, num2, num1 / num2);
            break;

        case 's':
            result = sin(num1);
            printf("sin(%.1lf) = %.1lf", num1, result);
            break;

        case 'c':
            result = cos(num1);
            printf("cos(%.1lf) = %.1lf", num1, result);
            break;

        case 't':
            result = tan(num1);
            printf("tan(%.1lf) = %.1lf", num1, result);
            break;

        case 'l':
            result = log(num1);
            printf("log(%.1lf) = %.1lf", num1, result);
            break;

        case 'p':
            result = pow(num1, num2);
            printf("%.1lf^%.1lf = %.1lf", num1, num2, result);
            break;

        // operator doesn't match any case constant (+, -, *, /, s, c, t, l, p)
        default:
            printf("Error! operator is not correct");
    }

    return 0;
}
