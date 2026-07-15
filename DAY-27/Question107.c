//Write a program to Create salary management system.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice;
    struct Employee {
        int id;
        char name[50];
        float salary;
    } employees[100];

    int count = 0;

    do {
        printf("Salary Management System\n");
        printf("1. Add Employee Record\n");
        printf("2. Display Employee Records\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (count < 100) {
                    printf("Enter Employee ID: ");
                    scanf("%d", &employees[count].id);
                    printf("Enter Employee Name: ");
                    scanf("%s", employees[count].name);
                    printf("Enter Employee Salary: ");
                    scanf("%f", &employees[count].salary);
                    count++;
                } else {
                    printf("Employee record limit reached.\n");
                }
                break;
            case 2:
                printf("Employee Records:\n");
                for (int i = 0; i < count; i++) {
                    printf("ID: %d, Name: %s, Salary: %.2f\n", employees[i].id, employees[i].name, employees[i].salary);
                }
                break;
            case 3:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}