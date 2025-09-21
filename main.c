#include <stdio.h>

// Function declarations
void addition();
void subtraction();
void multiplication();
void division();

int main() {
    int choice;
    char cont;

    do {
        // Menu
        printf("\n===== SIMPLE CALCULATOR =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: addition(); break;
            case 2: subtraction(); break;
            case 3: multiplication(); break;
            case 4: division(); break;
            case 5: printf("Exiting program...\n"); return 0;
            default: printf("Invalid choice! Please try again.\n");
        }

        printf("\nDo you want to perform another calculation? (y/n): ");
        scanf(" %c", &cont);  // space before %c is important
    } while(cont == 'y' || cont == 'Y');

    return 0;
}

// Function definitions
void addition() {
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    printf("Result: %.2lf + %.2lf = %.2lf\n", a, b, a + b);
}

void subtraction() {
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    printf("Result: %.2lf - %.2lf = %.2lf\n", a, b, a - b);
}

void multiplication() {
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    printf("Result: %.2lf * %.2lf = %.2lf\n", a, b, a * b);
}

void division() {
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    if(b != 0)
        printf("Result: %.2lf / %.2lf = %.2lf\n", a, b, a / b);
    else
        printf("Error! Division by zero is not allowed.\n");
}

