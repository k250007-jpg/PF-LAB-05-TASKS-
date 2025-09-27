#include <stdio.h>

int main() {
    int age, movie;
    char ticket[30];

    // Input age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Decide ticket type
    if (age < 12)
        sprintf(ticket, "Child Ticket");
    else if (age <= 60)
        sprintf(ticket, "Adult Ticket");
    else
        sprintf(ticket, "Senior Citizen Ticket");

    // Movie selection
    printf("\nSelect a movie:\n1. Action\n2. Comedy\n3. Horror\n");
    scanf("%d", &movie);

    printf("\nYou booked: %s - ", ticket);
    switch (movie) {
        case 1: printf("Action Movie\n"); break;
        case 2: printf("Comedy Movie\n"); break;
        case 3: printf("Horror Movie\n"); break;
        default: printf("Invalid Movie Selection\n");
    }

    return 0;
}

