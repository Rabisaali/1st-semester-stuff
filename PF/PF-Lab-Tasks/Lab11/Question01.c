#include <stdio.h>
typedef struct flightInfo {
    int flightNumber;
    char departureCity[50];
    char destinationCity[50];
    char date[11]; // DD-MM-YYYY
    int availableSeats;
} flightInfo;
void bookAFlight(flightInfo* F1);
void displayDetails(flightInfo* F1);
int main () {
    flightInfo F1;
    int choice;
    bookAFlight(&F1);
    displayDetails(&F1);
    return 0;
}
void bookAFlight(flightInfo* F1) {
    printf("Booking a flight.........\n");
    int flightnum, seats;
    char depCity[50], destCity[50], date[11];
    printf("Enter the flight number: ");
    scanf("%d", &F1->flightNumber);
    printf("Enter the departure city: ");
    scanf("%s", F1->departureCity);
    printf("Enter the destination city: ");
    scanf("%s", F1->destinationCity);
    printf("Enter the date in DD-MM-YYYY format: ");
    scanf("%s", F1->date);
    printf("Enter the number of available seats: ");
    scanf("%d", &F1->availableSeats);
    printf("Record added successfully..........\n");
    return;
}
void displayDetails(flightInfo* F1) {
    printf("Displaying flight details..........\n");
    printf("Flight Nmuber: %d\n", F1->flightNumber);
    printf("Departure City: %s\n", F1->departureCity);
    printf("Destination City: %s\n", F1->destinationCity);
    printf("Date: %s\n", F1->date);
    printf("Number of available seats: %d\n", F1->availableSeats);
    return;
}