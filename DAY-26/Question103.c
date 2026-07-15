//Write a program to Create ATM simulation.
#include <stdio.h>
int main() {
    int pin, enteredPin, choice;
    float balance = 1000.0;

    printf("Welcome to the ATM Simulation!\n");
    printf("Please enter your PIN: ");
    scanf("%d", &enteredPin);

    if (enteredPin != 1234) {
        printf("Incorrect PIN. Access denied.\n");
        return 0;
    }

    do {
        printf("\nATM Menu:\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your current balance is: $%.2f\n", balance);
                break;
            case 2: {
                float deposit;
                printf("Enter amount to deposit: ");
                scanf("%f", &deposit);
                balance += deposit;
                printf("Deposit successful! New balance: $%.2f\n", balance);
                break;
            }
            case 3: {
                float withdraw;
                printf("Enter amount to withdraw: ");
                scanf("%f", &withdraw);
                if (withdraw > balance) {
                    printf("Insufficient funds! Your current balance is: $%.2f\n", balance);
                } else {
                    balance -= withdraw;
                    printf("Withdrawal successful! New balance: $%.2f\n", balance);
                }
                break;
            }
            case 4:
                printf("Thank you for using the ATM Simulation. Goodbye!\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}