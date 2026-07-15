//Write a program to Create menu-driven string operating system.
#include <stdio.h>
#include <string.h>

int main() {
    int choice;
    char str[100];

    do {
        printf("\n===== MENU DRIVEN STRING OPERATING SYSTEM =====\n");
        printf("1. Insert String\n");
        printf("2. Delete String\n");
        printf("3. Display String\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the string to insert: ");
                scanf("%s", str);
                break;

            case 2:
                str[0] = '\0';
                printf("String deleted successfully.\n");
                break;

            case 3:
                printf("String: %s\n", str);
                break;

            case 4:
                printf("Exiting String Operating System...\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}