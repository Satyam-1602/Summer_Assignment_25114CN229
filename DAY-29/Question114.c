//Write a program to Create menu-driven array operating system.
#include <stdio.h>

int main() {
    int choice, size, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];

    do {
        printf("\n===== MENU DRIVEN ARRAY OPERATING SYSTEM =====\n");
        printf("1. Insert Element\n");
        printf("2. Delete Element\n");
        printf("3. Display Array\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (i < size) {
                    printf("Enter the element to insert: ");
                    scanf("%d", &arr[i]);
                    i++;
                } else {
                    printf("Array is full!\n");
                }
                break;

            case 2:
                if (i > 0) {
                    i--;
                    printf("Element deleted successfully.\n");
                } else {
                    printf("Array is empty!\n");
                }
                break;

            case 3:
                printf("Array elements: ");
                for (int j = 0; j < i; j++) {
                    printf("%d ", arr[j]);
                }
                printf("\n");
                break;

            case 4:
                printf("Exiting Array Operating System...\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}