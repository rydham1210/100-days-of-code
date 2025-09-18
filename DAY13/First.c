
#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);  

    printf("Enter second number: ");
    scanf("%d", &b);

    switch(op) {
        case '+':
            printf("Addition is = %d\n", a + b);
            break;
        case '-':
            printf("Subtraction is = %d\n", a - b);
            break;
        case '*':
            printf("Multiplication = %d\n", a * b);
            break;
        case '/':
            if (b != 0)
                printf("Division is = %.2f\n", (float)a / b); 
            else
                printf("Error! Division by zero.\n");
            break;
        case '%':
            if (b != 0)
                printf("Remainder is = %d\n", a % b);
            else
                printf("Error! Modulus by zero.\n");
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}