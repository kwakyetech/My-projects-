#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int choice;
    double num1, num2, result;
    
    printf("Welcome to the Scientific Calculator\n");
    printf("===================================\n");
    printf("Choose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exponentiation\n");
    printf("6. Square Root\n");
    printf("7. Logarithm (base 10)\n");
    printf("8. Exit\n");
    scanf("%d", &choice);
    
    while(choice != 8) {
        switch(choice) {
            case 1:
                printf("Enter the first number: ");
                scanf("%lf", &num1);
                printf("Enter the second number: ");
                scanf("%lf", &num2);
                result = num1 + num2;
                printf("Result: %.3lf\n", result);
                break;
            case 2:
                printf("Enter the first number: ");
                scanf("%lf", &num1);
                printf("Enter the second number: ");
                scanf("%lf", &num2);
                result = num1 - num2;
                printf("Result: %.3lf\n", result);
                break;
            case 3:
                printf("Enter the first number: ");
                scanf("%lf", &num1);
                printf("Enter the second number: ");
                scanf("%lf", &num2);
                result = num1 * num2;
                printf("Result: %.3lf\n", result);
                break;
            case 4:
                printf("Enter the first number: ");
                scanf("%lf", &num1);
                printf("Enter the second number: ");
                scanf("%lf", &num2);
                result = num1 / num2;
                printf("Result: %.3lf\n", result);
                break;
            case 5:
                printf("Enter a base number: ");
                scanf("%lf", &num1);
                printf("Enter an exponent: ");
                scanf("%lf", &num2);
                result = pow(num1, num2);
                printf("Result: %.3lf\n", result);
                break;
            case 6:
                printf("Enter a number to take the square root of: ");
                scanf("%lf", &num1);
                result = sqrt(num1);
                printf("Result: %.3lf\n", result);
                break;
            case 7:
                printf("Enter a number to take the logarithm of: ");
                scanf("%lf", &num1);
                result = log10(num1);
                printf("Result: %.3lf\n", result);
                break;
            default:
                printf("Invalid choice, please try again.\n");
        }
        printf("\n");
        
        printf("Choose an operation:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exponentiation\n");
        printf("6. Square Root\n");
        printf("7. Logarithm (base 10)\n");
        printf("8. Exit\n");
        scanf("%d", &choice);
    }
    
    printf("Thanks for using the Scientific Calculator!\n");
    
    return 0;
}

