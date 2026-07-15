//Write a program to Create mini library system.
#include <stdio.h>
#include <string.h>

#define MAX 100

struct Book
{
    int id;
    char title[50];
    char author[50];
    int issued;   
};

struct Book library[MAX];
int count = 0;

// Add Book
void addBook()
{
    if(count >= MAX)
    {
        printf("\nLibrary is Full!\n");
        return;
    }

    printf("\nEnter Book ID: ");
    scanf("%d", &library[count].id);

    printf("Enter Book Title: ");
    scanf(" %[^\n]", library[count].title);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", library[count].author);

    library[count].issued = 0;
    count++;

    printf("\nBook Added Successfully!\n");
}

void displayBooks()
{
    if(count == 0)
    {
        printf("\nNo Books Available!\n");
        return;
    }

    printf("\n------ Library Books ------\n");

    for(int i = 0; i < count; i++)
    {
        printf("\nBook %d\n", i + 1);
        printf("Book ID : %d\n", library[i].id);
        printf("Title   : %s\n", library[i].title);
        printf("Author  : %s\n", library[i].author);

        if(library[i].issued == 0)
            printf("Status  : Available\n");
        else
            printf("Status  : Issued\n");
    }
}

void searchBook()
{
    int id, found = 0;

    printf("\nEnter Book ID to Search: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++)
    {
        if(library[i].id == id)
        {
            printf("\nBook Found!\n");
            printf("Book ID : %d\n", library[i].id);
            printf("Title   : %s\n", library[i].title);
            printf("Author  : %s\n", library[i].author);

            if(library[i].issued == 0)
                printf("Status  : Available\n");
            else
                printf("Status  : Issued\n");

            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("\nBook Not Found!\n");
}

void issueBook()
{
    int id, found = 0;

    printf("\nEnter Book ID to Issue: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++)
    {
        if(library[i].id == id)
        {
            found = 1;

            if(library[i].issued == 0)
            {
                library[i].issued = 1;
                printf("\nBook Issued Successfully!\n");
            }
            else
            {
                printf("\nBook is Already Issued!\n");
            }

            break;
        }
    }

    if(found == 0)
        printf("\nBook Not Found!\n");
}

void returnBook()
{
    int id, found = 0;

    printf("\nEnter Book ID to Return: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++)
    {
        if(library[i].id == id)
        {
            found = 1;

            if(library[i].issued == 1)
            {
                library[i].issued = 0;
                printf("\nBook Returned Successfully!\n");
            }
            else
            {
                printf("\nBook is Already Available!\n");
            }

            break;
        }
    }

    if(found == 0)
        printf("\nBook Not Found!\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n========== MINI LIBRARY SYSTEM ==========\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addBook();
                break;

            case 2:
                displayBooks();
                break;

            case 3:
                searchBook();
                break;

            case 4:
                issueBook();
                break;

            case 5:
                returnBook();
                break;

            case 6:
                printf("\nThank You!\n");
                break;

            default:
                printf("\nInvalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}