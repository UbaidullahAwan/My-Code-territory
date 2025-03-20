#include <iostream>
#include <string>
#include<windows.h>
using namespace std;

struct Booking {
    string customerName;
    string destination;
    string travelDate;
    int numberOfPeople;
    float totalCost;
};

void displayMenu() {
    cout << "\n===== Travel Agency Booking System =====" << endl;
    cout << "1. Book a Trip" << endl;
    cout << "2. View All Bookings" << endl;
    cout << "3. Exit" << endl;
    cout << "=======================================" << endl;
    cout << "Enter your choice: ";
}

void bookTrip(Booking bookings[], int &bookingCount) {
    if (bookingCount >= 100) {
        cout << "Booking limit reached! Cannot add more bookings." << endl;
        return;
    }

    cout << "\n===== Book a Trip =====" << endl;

    cout << "Enter customer name: ";
    cin.ignore();
    getline(cin, bookings[bookingCount].customerName);

    cout << "Enter destination: ";
    getline(cin, bookings[bookingCount].destination);
    cout << "Enter travel date (DD/MM/YYYY): ";
    getline(cin, bookings[bookingCount].travelDate);


    while (true) {
        cout << "Enter number of people: ";
        cin >> bookings[bookingCount].numberOfPeople;
        if (bookings[bookingCount].numberOfPeople > 0) {
            break;
        }
        cout << "Invalid input! Number of people must be greater than 0." << endl;
    }

   
    while (true) {
        cout << "Enter total cost: $";
        cin >> bookings[bookingCount].totalCost;
        if (bookings[bookingCount].totalCost > 0) {
            break;
        }
        cout << "Invalid input! Total cost must be greater than 0." << endl;
    }

    bookingCount++; 
    cout << "Booking successful!" << endl;
}


void viewBookings(Booking bookings[], int bookingCount) {
    if (bookingCount == 0) {
        cout << "\nNo bookings found!" << endl;
        return;
    }

    cout << "\n===== All Bookings =====" << endl;
    for (int i = 0; i < bookingCount; i++) {
        cout << "Booking " << i + 1 << ":" << endl;
        cout << "Customer Name: " << bookings[i].customerName << endl;
        cout << "Destination: " << bookings[i].destination << endl;
        cout << "Travel Date: " << bookings[i].travelDate << endl;
        cout << "Number of People: " << bookings[i].numberOfPeople << endl;
        cout << "Total Cost: $" << bookings[i].totalCost << endl;
        cout << "-------------------------" << endl;
    }
}

int main() {
	HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hconsole,2);
    Booking bookings[100];
    int bookingCount = 0; 
    int choice;

    while (true) {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                bookTrip(bookings, bookingCount);
                break;
            case 2:
                viewBookings(bookings, bookingCount);
                break;
            case 3:
                cout << "Exiting the system. Thank you!" << endl;
                return 0;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}