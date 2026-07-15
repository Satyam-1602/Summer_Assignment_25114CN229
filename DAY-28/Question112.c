//write a program to create a contact management system.
#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    struct Contact contacts[100];
    int count = 0;
    int choice, i, found;
    char searchName[50];

    while (1) {
        printf("\n===== CONTACT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Contact\n");
        printf("2. View All Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            if (count >= 100) {
                printf("Contact List is Full!\n");
                break;
            }

            printf("Enter Name: ");
            scanf(" %[^\n]", contacts[count].name);

            printf("Enter Phone Number: ");
            scanf("%s", contacts[count].phone);

            count++;
            printf("Contact Added Successfully!\n");
            break;

        case 2:
            if (count == 0) {
                printf("No Contacts Available!\n");
            } else {
                printf("\n----- Contact List -----\n");
                for (i = 0; i < count; i++) {
                    printf("\nContact %d\n", i + 1);
                    printf("Name : %s\n", contacts[i].name);
                    printf("Phone: %s\n", contacts[i].phone);
                }
            }
            break;

        case 3:
            if (count == 0) {
                printf("No Contacts Available!\n");
                break;
            }

            printf("Enter Name to Search: ");
            scanf(" %[^\n]", searchName);

            found = 0;
            for (i = 0; i < count; i++) {
                if (strcmp(searchName, contacts[i].name) == 0) {
                    printf("\nContact Found!\n");
                    printf("Name : %s\n", contacts[i].name);
                    printf("Phone: %s\n", contacts[i].phone);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Contact Not Found!\n");

            break;

        case 4:
            if (count == 0) {
                printf("No Contacts Available!\n");
                break;
            }

            printf("Enter Name to Delete: ");
            scanf(" %[^\n]", searchName);

            found = 0;
            for (i = 0; i < count; i++) {
                if (strcmp(searchName, contacts[i].name) == 0) {
                    int j;
                    for (j = i; j < count - 1; j++) {
                        contacts[j] = contacts[j + 1];
                    }
                    count--;
                    found = 1;
                    printf("Contact Deleted Successfully!\n");
                    break;
                }
            }

            if (!found)
                printf("Contact Not Found!\n");

            break;

        case 5:
            printf("Thank you for using Contact Management System!\n");
            return 0;

        default:
            printf("Invalid Choice! Please Try Again.\n");
        }
    }

    return 0;
}