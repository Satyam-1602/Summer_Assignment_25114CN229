//Write a program to Create ticket booking system.
#include <stdio.h>
#include <string.h>

struct Ticket {
    char name[50];
    int age;
    int ticketsBooked;
};

int main() {
    struct Ticket passenger;
    int totalSeats = 50;
    int bookedSeats = 0;
    int choice, tickets;

    passenger.ticketsBooked = 0;

    while (1) {
        printf("\n===== TICKET BOOKING SYSTEM =====\n");
        printf("1. View Available Seats\n");
        printf("2. Book Ticket\n");
        printf("3. Cancel Ticket\n");
        printf("4. View Booking Details\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("\nTotal Seats     : %d\n", totalSeats);
            printf("Booked Seats    : %d\n", bookedSeats);
            printf("Available Seats : %d\n", totalSeats - bookedSeats);
            break;

        case 2:
            if (bookedSeats == totalSeats) {
                printf("\nSorry! No seats available.\n");
                break;
            }

            printf("\nEnter Passenger Name: ");
            scanf(" %[^\n]", passenger.name);

            printf("Enter Age: ");
            scanf("%d", &passenger.age);

            printf("Enter Number of Tickets: ");
            scanf("%d", &tickets);

            if (tickets <= 0) {
                printf("Invalid number of tickets!\n");
            }
            else if (bookedSeats + tickets > totalSeats) {
                printf("Only %d seats are available.\n", totalSeats - bookedSeats);
            }
            else {
                passenger.ticketsBooked = tickets;
                bookedSeats += tickets;
                printf("\nTicket Booked Successfully!\n");
            }
            break;

        case 3:
            if (passenger.ticketsBooked == 0) {
                printf("\nNo tickets booked yet.\n");
            }
            else {
                bookedSeats -= passenger.ticketsBooked;
                passenger.ticketsBooked = 0;
                printf("\nTicket Cancelled Successfully!\n");
            }
            break;

        case 4:
            if (passenger.ticketsBooked == 0) {
                printf("\nNo booking found.\n");
            }
            else {
                printf("\n===== BOOKING DETAILS =====\n");
                printf("Passenger Name : %s\n", passenger.name);
                printf("Age            : %d\n", passenger.age);
                printf("Tickets Booked : %d\n", passenger.ticketsBooked);
            }
            break;

        case 5:
            printf("\nThank you for using the Ticket Booking System!\n");
            return 0;

        default:
            printf("\nInvalid Choice! Please try again.\n");
        }
    }

    return 0;
}