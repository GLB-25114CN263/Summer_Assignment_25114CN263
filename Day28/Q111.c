#include <stdio.h>

int main() {
    int seats = 50, booked;

    printf("Available Seats = %d\n", seats);

    printf("Enter number of seats to book: ");
    scanf("%d", &booked);

    if(booked <= seats) {
        seats -= booked;
        printf("Booking Successful\n");
        printf("Remaining Seats = %d", seats);
    }
    else {
        printf("Not Enough Seats Available");
    }

    return 0;
}