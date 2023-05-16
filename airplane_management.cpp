#include <iostream>
using namespace std;

#define Max_Economy_Seats 60
#define Max_Business_Seats 10
#define Airport_Size 10

class Flight
{
    char Flight_Number[6];
    char Flight_Company[10];
    int economy_seats_available=Max_Economy_Seats;
    int business_seats_available=Max_Business_Seats;
    char Destination[25];
    int Departure_Time;
    int Arrival_Time;
public:
    void All_Flights_Available()
    {
        cout<<"Enter the Flight Number: ";
        cin>>Flight_Number;
        cout<<"Enter the Flight Company: ";
        cin>>Flight_Company;
        cout<<"Business Seats Available: "<<economy_seats_available<<endl;
        cout<<"Economy Seats Available: "<<business_seats_available<<endl;
        cout<<"Enter destination: ";
        cin>>Destination;
        cout<<"Enter the Departure Time: ";
        cin>>Departure_Time;
        cout<<"Enter the Arrival Time: ";
        cin>>Arrival_Time;
        cout<<"\n";
    }
    void Print_Details()
    {
        cout<<Flight_Number;
        cout<<Flight_Company;
        cout<<Destination;
        cout<<economy_seats_available;
        cout<<business_seats_available;
        cout<<Departure_Time;
        cout<<Arrival_Time;
    }
};

int main()
{
    Flight F1[Airport_Size];
    for(int i=0;i<Airport_Size;i++)
    {
        F1[i].All_Flights_Available();
    }
    for(int i=0;i<Airport_Size;i++)
    {
        F1[i].Print_Details();
    }
    return(0);
}
