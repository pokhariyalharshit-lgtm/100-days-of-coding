#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char op;
    printf("Enter operator (+ - * / %): ");
    if (scanf(" %c", &op) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    if (op == '%') {
        long long a, b;
        printf("Enter two integers: ");
        if (scanf("%lld %lld", &a, &b) != 2) {
            printf("Invalid input\n");
            return 1;
        }
        if (b == 0) {
            printf("Error: Division by zero\n");
            return 1;
        }
        printf("Result = %lld\n", a % b);
    } else {
        double x, y;
        printf("Enter two numbers: ");
        if (scanf("%lf %lf", &x, &y) != 2) {
            printf("Invalid input\n");
            return 1;
        }
        switch (op) {
            case '+':
                printf("Result = %.6g\n", x + y);
                break;
            case '-':
                printf("Result = %.6g\n", x - y);
                break;
            case '*':
                printf("Result = %.6g\n", x * y);
                break;
            case '/':
                if (y == 0.0) {
                    printf("Error: Division by zero\n");
                    return 1;
                }
                printf("Result = %.6g\n", x / y);
                break;
            default:
                printf("Invalid operator\n");
                return 1;
        }
    }

    return 0;
}
