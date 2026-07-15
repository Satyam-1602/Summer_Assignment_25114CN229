//write a program to Develop complete mini project using arrays, strings and functions. 
// Hostel Roommate Management System
#include <stdio.h>
#include <string.h>

#define MAX 20

char names[MAX][50];
float expenses[MAX];
int chores[MAX];
int n = 0;

void addRoommate()
{
    if (n >= MAX)
    {
        printf("\nRoommate limit reached!\n");
        return;
    }

    printf("\nEnter roommate name: ");
    scanf(" %[^\n]", names[n]);

    expenses[n] = 0;
    chores[n] = 0;
    n++;

    printf("Roommate added successfully!\n");
}

void addExpense()
{
    char name[50];
    float amount;
    int i;

    printf("\nEnter roommate name: ");
    scanf(" %[^\n]", name);

    for (i = 0; i < n; i++)
    {
        if (strcmp(names[i], name) == 0)
        {
            printf("Enter expense amount: Rs. ");
            scanf("%f", &amount);

            expenses[i] += amount;

            printf("Expense added successfully!\n");
            return;
        }
    }

    printf("Roommate not found!\n");
}

void completeChore()
{
    char name[50];
    int i;

    printf("\nEnter roommate name: ");
    scanf(" %[^\n]", name);

    for (i = 0; i < n; i++)
    {
        if (strcmp(names[i], name) == 0)
        {
            chores[i]++;

            printf("Chore recorded successfully!\n");
            return;
        }
    }

    printf("Roommate not found!\n");
}

void displayReport()
{
    int i;
    float total = 0;

    printf("\n-------------------------------------------------\n");
    printf("          HOSTEL ROOMMATE REPORT\n");
    printf("-------------------------------------------------\n");
    printf("%-20s %-15s %-10s\n", "Name", "Expense", "Chores");
    printf("-------------------------------------------------\n");

    for (i = 0; i < n; i++)
    {
        printf("%-20s Rs. %-11.2f %-10d\n",
               names[i], expenses[i], chores[i]);

        total += expenses[i];
    }

    printf("-------------------------------------------------\n");
    printf("Total Room Expense: Rs. %.2f\n", total);
}

void expenseSettlement()
{
    int i;
    float total = 0, average;

    if (n == 0)
    {
        printf("\nNo roommates added!\n");
        return;
    }

    for (i = 0; i < n; i++)
        total += expenses[i];

    average = total / n;

    printf("\n----------- EXPENSE SETTLEMENT -----------\n");
    printf("Average Expense Per Person: Rs. %.2f\n\n", average);

    for (i = 0; i < n; i++)
    {
        if (expenses[i] > average)
            printf("%s should receive Rs. %.2f\n",
                   names[i], expenses[i] - average);

        else if (expenses[i] < average)
            printf("%s should pay Rs. %.2f\n",
                   names[i], average - expenses[i]);

        else
            printf("%s is fully settled.\n", names[i]);
    }
}

void findBestRoommate()
{
    int i, best;

    if (n == 0)
    {
        printf("\nNo roommates added!\n");
        return;
    }

    best = 0;

    for (i = 1; i < n; i++)
    {
        if (chores[i] > chores[best])
            best = i;
    }

    printf("\n====================================\n");
    printf("       ROOMMATE OF THE MONTH\n");
    printf("====================================\n");
    printf("Winner: %s\n", names[best]);
    printf("Chores Completed: %d\n", chores[best]);
    printf("====================================\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n====================================\n");
        printf(" HOSTEL ROOMMATE MANAGEMENT SYSTEM\n");
        printf("====================================\n");
        printf("1. Add Roommate\n");
        printf("2. Add Expense\n");
        printf("3. Record Completed Chore\n");
        printf("4. Display Room Report\n");
        printf("5. Expense Settlement\n");
        printf("6. Roommate of the Month\n");
        printf("7. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addRoommate();
                break;

            case 2:
                addExpense();
                break;

            case 3:
                completeChore();
                break;

            case 4:
                displayReport();
                break;

            case 5:
                expenseSettlement();
                break;

            case 6:
                findBestRoommate();
                break;

            case 7:
                printf("\nThank you for using the system!\n");
                break;

            default:
                printf("\nInvalid choice! Try again.\n");
        }

    } while (choice != 7);

    return 0;
}