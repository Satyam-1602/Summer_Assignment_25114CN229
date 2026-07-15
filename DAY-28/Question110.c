//Write a program to Create bank account system.
#include <stdio.h>
#include <string.h>

struct BankAccount {
    int accountNumber;
    char name[50];
    float balance;
};

void createAccount(struct BankAccount *acc) {
    printf("\nEnter Account Number: ");
    scanf("%d", &acc->accountNumber);

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", acc->name);

    printf("Enter Initial Deposit: ");
    scanf("%f", &acc->balance);

    printf("\nAccount Created Successfully!\n");
}

void deposit(struct BankAccount *acc) {
    float amount;

    printf("\nEnter Amount to Deposit: ");
    scanf("%f", &amount);

    if (amount > 0) {
        acc->balance += amount;
        printf("Amount Deposited Successfully!\n");
    } else {
        printf("Invalid Amount!\n");
    }
}

void withdraw(struct BankAccount *acc) {
    float amount;

    printf("\nEnter Amount to Withdraw: ");
    scanf("%f", &amount);

    if (amount <= 0) {
        printf("Invalid Amount!\n");
    } else if (amount > acc->balance) {
        printf("Insufficient Balance!\n");
    } else {
        acc->balance -= amount;
        printf("Withdrawal Successful!\n");
    }
}

void checkBalance(struct BankAccount acc) {
    printf("\n----- Account Details -----\n");
    printf("Account Number : %d\n", acc.accountNumber);
    printf("Account Holder : %s\n", acc.name);
    printf("Current Balance: %.2f\n", acc.balance);
}

int main() {
    struct BankAccount account;
    int choice;
    int created = 0;

    while (1) {
        printf("\n===== BANK ACCOUNT SYSTEM =====\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Check Balance\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createAccount(&account);
                created = 1;
                break;

            case 2:
                if (created)
                    deposit(&account);
                else
                    printf("Please create an account first!\n");
                break;

            case 3:
                if (created)
                    withdraw(&account);
                else
                    printf("Please create an account first!\n");
                break;

            case 4:
                if (created)
                    checkBalance(account);
                else
                    printf("Please create an account first!\n");
                break;

            case 5:
                printf("Thank you for using the Bank Account System!\n");
                return 0;

            default:
                printf("Invalid Choice! Please try again.\n");
        }
    }

    return 0;
}