// A C++ implementation of a flight management system

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <limits>
#include <stdexcept>
#include <utility>

using namespace std;

// Global constants
const int MAX_SEATS = 100;
const int MAX_ROWS = 10;
const int MAX_COLS = 10;
const int MAX_FLIGHTS = 100;
const int MAX_PASSENGERS = 1000;
const int MAX_AIRLINE_LENGTH = 50;
const int MAX_FLIGHT_NUM_LENGTH = 6;
const int MAX_TIME_LENGTH = 5;
const int MAX_DATE_LENGTH = 10;

// Global variables
int numFlights = 0;
int numPassengers = 0;
int numSeats = 0;
int numPassengersOnFlight = 0;

// Structs
struct Seat {
    int row;
    char col;
    bool isOccupied;
};

struct Flight {
    string airline;
    string flightNum;
    string departureAirport;
    string arrivalAirport;
    string departureTime;
    string arrivalTime;
    string departureDate;
    string arrivalDate;
    int numSeats;
    int numPassengers;
    Seat seats[MAX_ROWS][MAX_COLS];
};

struct Passenger {
    string firstName;
    string lastName;
    string flightNum;
    string seat;
};

// Function prototypes
void displayMenu();
void displayFlights(Flight flights[], int numFlights);
void displayPassengers(Passenger passengers[], int numPassengers);
void displayFlightInfo(Flight flights[], int numFlights, string flightNum);
void displaySeatInfo(Flight flights[], int numFlights, string seat);

// Main function
