//Write a program to Create marksheet generation system.
#include <stdio.h>
#include <stdlib.h>
int main() {
    int choice;
    struct Student {
        int id;
        char name[50];
        float marks;
    } students[100];

    int count = 0;

    do {
        printf("Marksheet Generation System\n");
        printf("1. Add Student Record\n");
        printf("2. Display Student Records\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (count < 100) {
                    printf("Enter Student ID: ");
                    scanf("%d", &students[count].id);
                    printf("Enter Student Name: ");
                    scanf("%s", students[count].name);
                    printf("Enter Student Marks: ");
                    scanf("%f", &students[count].marks);
                    count++;
                } else {
                    printf("Student record limit reached.\n");
                }
                break;
            case 2:
                printf("Student Records:\n");
                for (int i = 0; i < count; i++) {
                    printf("ID: %d, Name: %s, Marks: %.2f\n", students[i].id, students[i].name, students[i].marks);
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