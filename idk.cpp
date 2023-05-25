/*Hello there.
Guys, this code is extremely crude, seeing as I just started working on it today.
As of now, this code has covered the concepts of inheritance and encapsulation.

I have only managed to take care of the booking part in this code.
The cancellation and numerous other features that we wish to add to the code are still missing.
*/


#include <iostream>
#include <string.h>

using namespace std;

class Flight_Details;
class Passenger_Details;
class Ticket_Booking;

class Flight_Details
{
public:
    char Flight_Number[7];
    char Flight_Company[20];
    char Source[20];
    char Destination[20];

    class date
    {
    public:
        int day;
        int month;
        int year;
    }Date_Of_Journey;

    char Departure_Time[4];
    char Arrival_Time[4];
    int Duration;
    int Economy_Seats_Available;
    int Business_Seats_Available;
    int Economy_Cost;
    int Business_Cost;
};

void Database(Flight_Details F[])
{
    strcpy(F[0].Flight_Number,"6E0234");
    strcpy(F[0].Flight_Company,"Indigo");
    strcpy(F[0].Source,"MUMBAI");
    strcpy(F[0].Destination,"DELHI");
    F[0].Date_Of_Journey.day = 20;
    F[0].Date_Of_Journey.month = 11;
    F[0].Date_Of_Journey.year = 2023;
    strcpy(F[0].Departure_Time,"0835");
    strcpy(F[0].Arrival_Time,"1055");
    F[0].Duration = (int)F[0].Arrival_Time - (int)F[0].Departure_Time;
    F[0].Economy_Seats_Available = 23;
    F[0].Business_Seats_Available = 4;
    F[0].Economy_Cost = 24999;
    F[0].Business_Cost = F[0].Economy_Cost + 7000;

    strcpy(F[1].Flight_Number,"AI1256");
    strcpy(F[1].Flight_Company,"Air India");
    strcpy(F[1].Source,"CHENNAI");
    strcpy(F[1].Destination,"BANGALORE");
    F[1].Date_Of_Journey.day = 23;
    F[1].Date_Of_Journey.month = 3;
    F[1].Date_Of_Journey.year = 2023;
    strcpy(F[1].Departure_Time,"1335");
    strcpy(F[1].Arrival_Time,"1500");
    F[1].Duration = (int)F[1].Arrival_Time - (int)F[1].Departure_Time;
    F[1].Economy_Seats_Available = 36;
    F[1].Business_Seats_Available = 2;
    F[1].Economy_Cost = 21999;
    F[1].Business_Cost = F[1].Economy_Cost + 7000;

    strcpy(F[2].Flight_Number,"G80993");
    strcpy(F[2].Flight_Company,"Go Air");
    strcpy(F[2].Source,"BANGALORE");
    strcpy(F[2].Destination,"DELHI");
    F[2].Date_Of_Journey.day = 13;
    F[2].Date_Of_Journey.month = 6;
    F[2].Date_Of_Journey.year = 2023;
    strcpy(F[2].Departure_Time,"2335");
    strcpy(F[2].Arrival_Time,"0215");
    F[2].Duration = (int)F[2].Arrival_Time - (int)F[2].Departure_Time;
    F[2].Economy_Seats_Available = 56;
    F[2].Business_Seats_Available = 7;
    F[2].Economy_Cost = 26999;
    F[2].Business_Cost = F[2].Economy_Cost + 7000;

    strcpy(F[3].Flight_Number,"AI9317");
    strcpy(F[3].Flight_Company,"Air India");
    strcpy(F[3].Source,"MUMBAI");
    strcpy(F[3].Destination,"CHENNAI");
    F[3].Date_Of_Journey.day = 17;
    F[3].Date_Of_Journey.month = 12;
    F[3].Date_Of_Journey.year = 2023;
    strcpy(F[3].Departure_Time,"1200");
    strcpy(F[3].Arrival_Time,"1325");
    F[3].Duration = (int)F[3].Arrival_Time - (int)F[3].Departure_Time;
    F[3].Economy_Seats_Available = 12;
    F[3].Business_Seats_Available = 0;
    F[3].Economy_Cost = 22999;
    F[3].Business_Cost = F[3].Economy_Cost + 7000;

    strcpy(F[4].Flight_Number,"AX0966");
    strcpy(F[4].Flight_Company,"Air India Express");
    strcpy(F[4].Source,"MUMBAI");
    strcpy(F[4].Destination,"BANGALORE");
    F[4].Date_Of_Journey.day = 30;
    F[4].Date_Of_Journey.month = 9;
    F[4].Date_Of_Journey.year = 2023;
    strcpy(F[4].Departure_Time,"1645");
    strcpy(F[4].Arrival_Time,"1805");
    F[4].Duration = (int)F[4].Arrival_Time - (int)F[4].Departure_Time;
    F[4].Economy_Seats_Available = 39;
    F[4].Business_Seats_Available = 4;
    F[4].Economy_Cost = 27999;
    F[4].Business_Cost = F[4].Economy_Cost + 7000;

    strcpy(F[5].Flight_Number,"SQ0598");
    strcpy(F[5].Flight_Company,"Singapore Airlines");
    strcpy(F[5].Source,"BANGALORE");
    strcpy(F[5].Destination,"SINGAPORE");
    F[5].Date_Of_Journey.day = 23;
    F[5].Date_Of_Journey.month = 1;
    F[5].Date_Of_Journey.year = 2024;
    strcpy(F[5].Departure_Time,"1245");
    strcpy(F[5].Arrival_Time,"1855");
    F[5].Duration = (int)F[5].Arrival_Time - (int)F[5].Departure_Time;
    F[5].Economy_Seats_Available = 72;
    F[5].Business_Seats_Available = 8;
    F[5].Economy_Cost = 54999;
    F[5].Business_Cost = F[5].Economy_Cost + 14000;

    strcpy(F[6].Flight_Number,"QF4398");
    strcpy(F[6].Flight_Company,"Qantas");
    strcpy(F[6].Source,"DELHI");
    strcpy(F[6].Destination,"LONDON");
    F[6].Date_Of_Journey.day = 5;
    F[6].Date_Of_Journey.month = 10;
    F[6].Date_Of_Journey.year = 2023;
    strcpy(F[6].Departure_Time,"0530");
    strcpy(F[6].Arrival_Time,"1325");
    F[6].Duration = (int)F[6].Arrival_Time - (int)F[6].Departure_Time;
    F[6].Economy_Seats_Available = 9;
    F[6].Business_Seats_Available = 2;
    F[6].Economy_Cost = 68999;
    F[6].Business_Cost = F[6].Economy_Cost + 14000;

    strcpy(F[7].Flight_Number,"BA0919");
    strcpy(F[7].Flight_Company,"British Airways");
    strcpy(F[7].Source,"DELHI");
    strcpy(F[7].Destination,"LONDON");
    F[7].Date_Of_Journey.day = 1;
    F[7].Date_Of_Journey.month = 11;
    F[7].Date_Of_Journey.year = 2023;
    strcpy(F[7].Departure_Time,"0655");
    strcpy(F[7].Arrival_Time,"1430");
    F[7].Duration = (int)F[7].Arrival_Time - (int)F[7].Departure_Time;
    F[7].Economy_Seats_Available = 32;
    F[7].Business_Seats_Available = 5;
    F[7].Economy_Cost = 46999;
    F[7].Business_Cost = F[7].Economy_Cost + 14000;

    strcpy(F[8].Flight_Number,"BA0232");
    strcpy(F[8].Flight_Company,"British Airways");
    strcpy(F[8].Source,"MUMBAI");
    strcpy(F[8].Destination,"LONDON");
    F[8].Date_Of_Journey.day = 23;
    F[8].Date_Of_Journey.month = 6;
    F[8].Date_Of_Journey.year = 2023;
    strcpy(F[8].Departure_Time,"1735");
    strcpy(F[8].Arrival_Time,"0025");
    F[8].Duration = (int)F[8].Arrival_Time - (int)F[8].Departure_Time;
    F[8].Economy_Seats_Available = 29;
    F[8].Business_Seats_Available = 3;
    F[8].Economy_Cost = 54999;
    F[8].Business_Cost = F[2].Economy_Cost + 14000;

}

class Passenger_Details
{
    char First_Name[20];
    char Last_Name[20];
    char Gender;
    int Age;
    char Passport_Number[10];
public:
    void Get_Passenger_Details();
};

void Passenger_Details::Get_Passenger_Details()
{
    cout << "Enter your First Name: ";
    cin >> First_Name;
    cout << "Enter your Last Name: ";
    cin >> Last_Name;
    cout << "Enter your Gender (M = Male, F = Female): ";
    cin >> Gender;
    cout << "Enter your Age: ";
    cin >> Age;
    cout << "Enter your Passport Number: ";
    cin >> Passport_Number;
}

class Ticket_Booking:public Passenger_Details
{
public:
    char User_Source[20];
    char User_Destination[20];
    void Get_Journey_Details(Flight_Details F[]);
    void Checking_Database_And_Final_Booking(Flight_Details F[]);
};

void Ticket_Booking::Get_Journey_Details(Flight_Details F[])
{
    Get_Passenger_Details();
    cout << "Enter your Source (in BLOCK LETTERS please): ";
    cin >> User_Source;
    cout << "Enter your Destination (in BLOCK LETTERS please): ";
    cin >> User_Destination;
}

void Ticket_Booking::Checking_Database_And_Final_Booking(Flight_Details F[])
{
    int flag=0;
    char flight_choice;
    int seat_choice;
    for(int i=0;i<9;i++)
    {
        if((strcmp(F[i].Source,User_Source)==0)&&(strcmp(F[i].Destination,User_Destination)==0))
        {
            cout<<"The flight "<<F[i].Flight_Number<<" of the company "<<F[i].Flight_Company<<" exists between the locations "<<F[i].Source <<" and "<<F[i].Destination<<endl;
            cout<<"\n\n";
            cout<<"Details of the Flight: "<<F[i].Flight_Number<<endl;
            cout<<"Source: "<<F[i].Source<<endl;
            cout<<"Destination: "<<F[i].Destination<<endl;
            cout<<"Date: "<<F[i].Date_Of_Journey.day<<"/"<<F[i].Date_Of_Journey.month<<"/"<<F[i].Date_Of_Journey.year<<endl;
            cout<<"Departure Time: "<<F[i].Departure_Time<<endl;
            cout<<"Arrival at Destination: "<<F[i].Arrival_Time<<endl;
            cout<<"Duration of Flight: "<<F[i].Duration<<endl;
            cout<<"Economy Class Seats Currently Available: "<<F[i].Economy_Seats_Available<<endl;
            cout<<"Business Class Seats Currently Available: "<<F[i].Business_Seats_Available<<endl;
            cout<<"\n\n";

            Flight_Choosing:

            cout<<"Would you like to book this flight? \n (press y/n, for yes or no respectively)"<<endl;
            cin>>flight_choice;
            if (flight_choice=='y')
            {
                Seat_Choosing:

                cout<<"Would you like to book: \n 1. Economy Class \n 2. Business Class"<<endl;
                cin>>seat_choice;
                if(seat_choice==1)
                {
                    if(F[i].Economy_Seats_Available==0)
                    {
                        char Class_Shifting;
                        cout<<"Sorry, seats not available."<<endl;
                        cout<<"Would you like to go for Business Class? (press y for yes, and n for no) "<<endl;
                        cin>>Class_Shifting;
                        if (Class_Shifting=='y')
                        {
                            goto Seat_Choosing;
                        }
                        else
                        {
                            goto Flight_Choosing;
                        }
                    }
                    F[i].Economy_Seats_Available-=1;
                    cout<<"Economy Class Seat booked in: "<<F[i].Flight_Number<<endl;
                    break;
                }
                else if(seat_choice==2)
                {
                    if(F[i].Business_Seats_Available==0)
                    {
                        char Class_Shifting;
                        cout<<"Sorry, seats not available."<<endl;
                        cout<<"Would you like to go for Economy Class? (press y for yes, and n for no) "<<endl;
                        cin>>Class_Shifting;
                        if (Class_Shifting=='y')
                        {
                            goto Seat_Choosing;
                        }
                        else
                        {
                            goto Flight_Choosing;
                        }
                    F[i].Business_Seats_Available-=1;
                    cout<<"Business Class Seat booked in: "<<F[i].Flight_Number<<endl;
                    break;
                    }
                }
                else if(flight_choice=='n')
                {
                    continue;
                }
            }
            else
            {
                flag++;
            }
        }
        if(flag==8)
        {
            cout<<"Sorry no flights available."<<endl;
        }
    }
}

int main()
{
    Flight_Details F[9];
    Database(F);
    Ticket_Booking T;
    T.Get_Journey_Details(F);
    T.Checking_Database_And_Final_Booking(F);
    return(0);
}
