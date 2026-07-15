//write a program to implement a mini employee management system.
#include <stdio.h>
#include <string.h>

#define MAX 100

struct Employee
{
    int id;
    char name[50];
    char department[50];
    float salary;
};

struct Employee emp[MAX];
int count = 0;

void addEmployee()
{
    if (count >= MAX)
    {
        printf("\nEmployee List is Full!\n");
        return;
    }

    printf("\nEnter Employee ID: ");
    scanf("%d", &emp[count].id);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", emp[count].name);

    printf("Enter Department: ");
    scanf(" %[^\n]", emp[count].department);

    printf("Enter Salary: ");
    scanf("%f", &emp[count].salary);

    count++;
    printf("\nEmployee Added Successfully!\n");
}

void displayEmployees()
{
    if (count == 0)
    {
        printf("\nNo Employee Records Found!\n");
        return;
    }

    printf("\n------ Employee Records ------\n");

    for (int i = 0; i < count; i++)
    {
        printf("\nEmployee %d\n", i + 1);
        printf("ID         : %d\n", emp[i].id);
        printf("Name       : %s\n", emp[i].name);
        printf("Department : %s\n", emp[i].department);
        printf("Salary     : %.2f\n", emp[i].salary);
    }
}

void searchEmployee()
{
    int id, found = 0;

    printf("\nEnter Employee ID to Search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++)
    {
        if (emp[i].id == id)
        {
            printf("\nEmployee Found!\n");
            printf("ID         : %d\n", emp[i].id);
            printf("Name       : %s\n", emp[i].name);
            printf("Department : %s\n", emp[i].department);
            printf("Salary     : %.2f\n", emp[i].salary);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nEmployee Not Found!\n");
}

void updateEmployee()
{
    int id, found = 0;

    printf("\nEnter Employee ID to Update: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++)
    {
        if (emp[i].id == id)
        {
            printf("Enter New Name: ");
            scanf(" %[^\n]", emp[i].name);

            printf("Enter New Department: ");
            scanf(" %[^\n]", emp[i].department);

            printf("Enter New Salary: ");
            scanf("%f", &emp[i].salary);

            printf("\nEmployee Record Updated Successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nEmployee Not Found!\n");
}

void deleteEmployee()
{
    int id, found = 0;

    printf("\nEnter Employee ID to Delete: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++)
    {
        if (emp[i].id == id)
        {
            for (int j = i; j < count - 1; j++)
            {
                emp[j] = emp[j + 1];
            }

            count--;
            found = 1;
            printf("\nEmployee Deleted Successfully!\n");
            break;
        }
    }

    if (!found)
        printf("\nEmployee Not Found!\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n========== MINI EMPLOYEE MANAGEMENT SYSTEM ==========\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Employee\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addEmployee();
                break;

            case 2:
                displayEmployees();
                break;

            case 3:
                searchEmployee();
                break;

            case 4:
                updateEmployee();
                break;

            case 5:
                deleteEmployee();
                break;

            case 6:
                printf("\nThank You!\n");
                break;

            default:
                printf("\nInvalid Choice!\n");
        }

    } while (choice != 6);

    return 0;
}