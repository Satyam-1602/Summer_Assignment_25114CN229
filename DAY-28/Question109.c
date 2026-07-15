//Write a program to Create library management system.
#include <stdio.h>
#include <string.h>

struct Book
{
    int id;
    char title[50];
    char author[50];
    int issued; 
};

int main()
{
    struct Book books[100];
    int count = 0;
    int choice, id, i, found;

    while (1)
    {
        printf("\n===== LIBRARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter Book ID: ");
            scanf("%d", &books[count].id);

            printf("Enter Book Title: ");
            scanf(" %[^\n]", books[count].title);

            printf("Enter Author Name: ");
            scanf(" %[^\n]", books[count].author);

            books[count].issued = 0;
            count++;

            printf("Book added successfully!\n");
            break;

        case 2:
            if (count == 0)
            {
                printf("No books available.\n");
            }
            else
            {
                printf("\n--- Book List ---\n");
                for (i = 0; i < count; i++)
                {
                    printf("\nBook %d\n", i + 1);
                    printf("ID: %d\n", books[i].id);
                    printf("Title: %s\n", books[i].title);
                    printf("Author: %s\n", books[i].author);

                    if (books[i].issued == 0)
                        printf("Status: Available\n");
                    else
                        printf("Status: Issued\n");
                }
            }
            break;

        case 3:
            printf("Enter Book ID to search: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < count; i++)
            {
                if (books[i].id == id)
                {
                    printf("\nBook Found!\n");
                    printf("Title: %s\n", books[i].title);
                    printf("Author: %s\n", books[i].author);

                    if (books[i].issued == 0)
                        printf("Status: Available\n");
                    else
                        printf("Status: Issued\n");

                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Book not found.\n");

            break;

        case 4:
            printf("Enter Book ID to issue: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < count; i++)
            {
                if (books[i].id == id)
                {
                    if (books[i].issued == 0)
                    {
                        books[i].issued = 1;
                        printf("Book issued successfully.\n");
                    }
                    else
                    {
                        printf("Book is already issued.\n");
                    }

                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Book not found.\n");

            break;

        case 5:
            printf("Enter Book ID to return: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < count; i++)
            {
                if (books[i].id == id)
                {
                    if (books[i].issued == 1)
                    {
                        books[i].issued = 0;
                        printf("Book returned successfully.\n");
                    }
                    else
                    {
                        printf("Book was not issued.\n");
                    }

                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Book not found.\n");

            break;

        case 6:
            printf("Thank you for using Library Management System!\n");
            return 0;

        default:
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}