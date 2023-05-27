/*Hello there.
Guys, this code is extremely crude, seeing as I just started working on it today.
As of now, this code has covered the concepts of inheritance and encapsulation.

I have only managed to take care of the booking part in this code.
The cancellation and numerous other features that we wish to add to the code are still missing.

UPDATE:

Added the following:
1. Cancellation.
2. Route Printing.
3. Passport Validity Check.

Previously had:
1. Booking.

*/


#include <iostream>
#include <string.h>
#include <iomanip>

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
    char Flight_Type[20];

    class date
    {
    public:
        int day;
        int month;
        int year;
    }Date_Of_Journey;

    char Departure_Time[6];
    char Arrival_Time[6];
    char Duration[6];
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
    strcpy(F[0].Flight_Type,"Domestic");
    F[0].Date_Of_Journey.day = 20;
    F[0].Date_Of_Journey.month = 11;
    F[0].Date_Of_Journey.year = 2023;
    strcpy(F[0].Departure_Time,"08:35");
    strcpy(F[0].Arrival_Time,"10:55");
    strcpy(F[0].Duration,"2:20");
    F[0].Economy_Seats_Available = 23;
    F[0].Business_Seats_Available = 4;
    F[0].Economy_Cost = 24999;
    F[0].Business_Cost = F[0].Economy_Cost + 7000;

    strcpy(F[1].Flight_Number,"AI1256");
    strcpy(F[1].Flight_Company,"Air India");
    strcpy(F[1].Source,"CHENNAI");
    strcpy(F[1].Destination,"BANGALORE");
    strcpy(F[1].Flight_Type,"Domestic");
    F[1].Date_Of_Journey.day = 23;
    F[1].Date_Of_Journey.month = 3;
    F[1].Date_Of_Journey.year = 2023;
    strcpy(F[1].Departure_Time,"13:35");
    strcpy(F[1].Arrival_Time,"15:00");
    strcpy(F[1].Duration,"1:25");
    F[1].Economy_Seats_Available = 36;
    F[1].Business_Seats_Available = 2;
    F[1].Economy_Cost = 21999;
    F[1].Business_Cost = F[1].Economy_Cost + 7000;

    strcpy(F[2].Flight_Number,"G80993");
    strcpy(F[2].Flight_Company,"Go Air");
    strcpy(F[2].Source,"BANGALORE");
    strcpy(F[2].Destination,"DELHI");
    strcpy(F[2].Flight_Type,"Domestic");
    F[2].Date_Of_Journey.day = 13;
    F[2].Date_Of_Journey.month = 6;
    F[2].Date_Of_Journey.year = 2023;
    strcpy(F[2].Departure_Time,"23:35");
    strcpy(F[2].Arrival_Time,"02:15");
    strcpy(F[2].Duration,"2:40");
    F[2].Economy_Seats_Available = 56;
    F[2].Business_Seats_Available = 7;
    F[2].Economy_Cost = 26999;
    F[2].Business_Cost = F[2].Economy_Cost + 7000;

    strcpy(F[3].Flight_Number,"AI9317");
    strcpy(F[3].Flight_Company,"Air India");
    strcpy(F[3].Source,"MUMBAI");
    strcpy(F[3].Destination,"CHENNAI");
    strcpy(F[3].Flight_Type,"Domestic");
    F[3].Date_Of_Journey.day = 17;
    F[3].Date_Of_Journey.month = 12;
    F[3].Date_Of_Journey.year = 2023;
    strcpy(F[3].Departure_Time,"12:00");
    strcpy(F[3].Arrival_Time,"13:25");
    strcpy(F[3].Duration,"1:25");
    F[3].Economy_Seats_Available = 12;
    F[3].Business_Seats_Available = 0;
    F[3].Economy_Cost = 22999;
    F[3].Business_Cost = F[3].Economy_Cost + 7000;

    strcpy(F[4].Flight_Number,"AX0966");
    strcpy(F[4].Flight_Company,"Air India Express");
    strcpy(F[4].Source,"MUMBAI");
    strcpy(F[4].Destination,"BANGALORE");
    strcpy(F[4].Flight_Type,"Domestic");
    F[4].Date_Of_Journey.day = 30;
    F[4].Date_Of_Journey.month = 9;
    F[4].Date_Of_Journey.year = 2023;
    strcpy(F[4].Departure_Time,"16:45");
    strcpy(F[4].Arrival_Time,"18:05");
    strcpy(F[4].Duration,"1:20");
    F[4].Economy_Seats_Available = 39;
    F[4].Business_Seats_Available = 4;
    F[4].Economy_Cost = 27999;
    F[4].Business_Cost = F[4].Economy_Cost + 7000;

    strcpy(F[5].Flight_Number,"SQ0598");
    strcpy(F[5].Flight_Company,"Singapore Airlines");
    strcpy(F[5].Source,"BANGALORE");
    strcpy(F[5].Destination,"SINGAPORE");
    strcpy(F[5].Flight_Type,"International");
    F[5].Date_Of_Journey.day = 23;
    F[5].Date_Of_Journey.month = 1;
    F[5].Date_Of_Journey.year = 2024;
    strcpy(F[5].Departure_Time,"12:45");
    strcpy(F[5].Arrival_Time,"18:55");
    strcpy(F[5].Duration,"6:10");
    F[5].Economy_Seats_Available = 72;
    F[5].Business_Seats_Available = 8;
    F[5].Economy_Cost = 54999;
    F[5].Business_Cost = F[5].Economy_Cost + 14000;

    strcpy(F[6].Flight_Number,"QF4398");
    strcpy(F[6].Flight_Company,"Qantas");
    strcpy(F[6].Source,"DELHI");
    strcpy(F[6].Destination,"LONDON");
    strcpy(F[6].Flight_Type,"International");
    F[6].Date_Of_Journey.day = 5;
    F[6].Date_Of_Journey.month = 10;
    F[6].Date_Of_Journey.year = 2023;
    strcpy(F[6].Departure_Time,"05:30");
    strcpy(F[6].Arrival_Time,"13:25");
    strcpy(F[6].Duration,"7:55");
    F[6].Economy_Seats_Available = 9;
    F[6].Business_Seats_Available = 2;
    F[6].Economy_Cost = 68999;
    F[6].Business_Cost = F[6].Economy_Cost + 14000;

    strcpy(F[7].Flight_Number,"BA0919");
    strcpy(F[7].Flight_Company,"British Airways");
    strcpy(F[7].Source,"DELHI");
    strcpy(F[7].Destination,"LONDON");
    strcpy(F[7].Flight_Type,"International");
    F[7].Date_Of_Journey.day = 1;
    F[7].Date_Of_Journey.month = 11;
    F[7].Date_Of_Journey.year = 2023;
    strcpy(F[7].Departure_Time,"06:55");
    strcpy(F[7].Arrival_Time,"14:30");
    strcpy(F[7].Duration,"7:35");
    F[7].Economy_Seats_Available = 32;
    F[7].Business_Seats_Available = 5;
    F[7].Economy_Cost = 46999;
    F[7].Business_Cost = F[7].Economy_Cost + 14000;

    strcpy(F[8].Flight_Number,"BA0232");
    strcpy(F[8].Flight_Company,"British Airways");
    strcpy(F[8].Source,"MUMBAI");
    strcpy(F[8].Destination,"LONDON");
    strcpy(F[8].Flight_Type,"International");
    F[8].Date_Of_Journey.day = 23;
    F[8].Date_Of_Journey.month = 6;
    F[8].Date_Of_Journey.year = 2023;
    strcpy(F[8].Departure_Time,"17:35");
    strcpy(F[8].Arrival_Time,"00:25");
    strcpy(F[8].Duration,"6:50");
    F[8].Economy_Seats_Available = 29;
    F[8].Business_Seats_Available = 3;
    F[8].Economy_Cost = 54999;
    F[8].Business_Cost = F[2].Economy_Cost + 14000;

    // Reverse routes of existing flights

    strcpy(F[9].Flight_Number,"6E0432");
    strcpy(F[9].Flight_Company,"Indigo");
    strcpy(F[9].Source,"DELHI");
    strcpy(F[9].Destination,"MUMBAI");
    strcpy(F[9].Flight_Type,"Domestic");
    F[9].Date_Of_Journey.day = 25;
    F[9].Date_Of_Journey.month = 11;
    F[9].Date_Of_Journey.year = 2023;
    strcpy(F[9].Departure_Time,"11:45");
    strcpy(F[9].Arrival_Time,"14:05");
    strcpy(F[9].Duration,"2:20");
    F[9].Economy_Seats_Available = 20;
    F[9].Business_Seats_Available = 3;
    F[9].Economy_Cost = 25999;
    F[9].Business_Cost = F[9].Economy_Cost + 7000;

    strcpy(F[10].Flight_Number,"AI6521");
    strcpy(F[10].Flight_Company,"Air India");
    strcpy(F[10].Source,"BANGALORE");
    strcpy(F[10].Destination,"CHENNAI");
    strcpy(F[10].Flight_Type,"Domestic");
    F[10].Date_Of_Journey.day = 26;
    F[10].Date_Of_Journey.month = 3;
    F[10].Date_Of_Journey.year = 2023;
    strcpy(F[10].Departure_Time,"09:15");
    strcpy(F[10].Arrival_Time,"10:40");
    strcpy(F[10].Duration,"1:25");
    F[10].Economy_Seats_Available = 35;
    F[10].Business_Seats_Available = 2;
    F[10].Economy_Cost = 22999;
    F[10].Business_Cost = F[10].Economy_Cost + 7000;

    strcpy(F[11].Flight_Number,"G80934");
    strcpy(F[11].Flight_Company,"Go Air");
    strcpy(F[11].Source,"DELHI");
    strcpy(F[11].Destination,"BANGALORE");
    strcpy(F[11].Flight_Type,"Domestic");
    F[11].Date_Of_Journey.day = 15;
    F[11].Date_Of_Journey.month = 6;
    F[11].Date_Of_Journey.year = 2023;
    strcpy(F[11].Departure_Time,"18:20");
    strcpy(F[11].Arrival_Time,"21:00");
    strcpy(F[11].Duration,"2:40");
    F[11].Economy_Seats_Available = 55;
    F[11].Business_Seats_Available = 6;
    F[11].Economy_Cost = 27999;
    F[11].Business_Cost = F[11].Economy_Cost + 7000;

    strcpy(F[12].Flight_Number,"AI7139");
    strcpy(F[12].Flight_Company,"Air India");
    strcpy(F[12].Source,"CHENNAI");
    strcpy(F[12].Destination,"MUMBAI");
    strcpy(F[12].Flight_Type,"Domestic");
    F[12].Date_Of_Journey.day = 20;
    F[12].Date_Of_Journey.month = 12;
    F[12].Date_Of_Journey.year = 2023;
    strcpy(F[12].Departure_Time,"16:00");
    strcpy(F[12].Arrival_Time,"17:25");
    strcpy(F[12].Duration,"1:25");
    F[12].Economy_Seats_Available = 11;
    F[12].Business_Seats_Available = 0;
    F[12].Economy_Cost = 22999;
    F[12].Business_Cost = F[12].Economy_Cost + 7000;

    strcpy(F[13].Flight_Number,"AX6609");
    strcpy(F[13].Flight_Company,"Air India Express");
    strcpy(F[13].Source,"BANGALORE");
    strcpy(F[13].Destination,"MUMBAI");
    strcpy(F[13].Flight_Type,"Domestic");
    F[13].Date_Of_Journey.day = 9;
    F[13].Date_Of_Journey.month = 10;
    F[13].Date_Of_Journey.year = 2023;
    strcpy(F[13].Departure_Time,"12:35");
    strcpy(F[13].Arrival_Time,"14:00");
    strcpy(F[13].Duration,"1:25");
    F[13].Economy_Seats_Available = 38;
    F[13].Business_Seats_Available = 4;
    F[13].Economy_Cost = 27999;
    F[13].Business_Cost = F[13].Economy_Cost + 7000;

    strcpy(F[14].Flight_Number,"SQ8559");
    strcpy(F[14].Flight_Company,"Singapore Airlines");
    strcpy(F[14].Source,"SINGAPORE");
    strcpy(F[14].Destination,"BANGALORE");
    strcpy(F[14].Flight_Type,"International");
    F[14].Date_Of_Journey.day = 26;
    F[14].Date_Of_Journey.month = 1;
    F[14].Date_Of_Journey.year = 2024;
    strcpy(F[14].Departure_Time,"20:15");
    strcpy(F[14].Arrival_Time,"02:25");
    strcpy(F[14].Duration,"6:10");
    F[14].Economy_Seats_Available = 71;
    F[14].Business_Seats_Available = 8;
    F[14].Economy_Cost = 54999;
    F[14].Business_Cost = F[14].Economy_Cost + 14000;

    strcpy(F[15].Flight_Number,"QF9834");
    strcpy(F[15].Flight_Company,"Qantas");
    strcpy(F[15].Source,"LONDON");
    strcpy(F[15].Destination,"DELHI");
    strcpy(F[15].Flight_Type,"International");
    F[15].Date_Of_Journey.day = 10;
    F[15].Date_Of_Journey.month = 10;
    F[15].Date_Of_Journey.year = 2023;
    strcpy(F[15].Departure_Time,"14:45");
    strcpy(F[15].Arrival_Time,"22:40");
    strcpy(F[15].Duration,"7:55");
    F[15].Economy_Seats_Available = 10;
    F[15].Business_Seats_Available = 2;
    F[15].Economy_Cost = 68999;
    F[15].Business_Cost = F[15].Economy_Cost + 14000;

    strcpy(F[16].Flight_Number,"BA9190");
    strcpy(F[16].Flight_Company,"British Airways");
    strcpy(F[16].Source,"LONDON");
    strcpy(F[16].Destination,"DELHI");
    strcpy(F[16].Flight_Type,"International");
    F[16].Date_Of_Journey.day = 7;
    F[16].Date_Of_Journey.month = 11;
    F[16].Date_Of_Journey.year = 2023;
    strcpy(F[16].Departure_Time,"15:45");
    strcpy(F[16].Arrival_Time,"23:20");
    strcpy(F[16].Duration,"7:35");
    F[16].Economy_Seats_Available = 22;
    F[16].Business_Seats_Available = 3;
    F[16].Economy_Cost = 64999;
    F[16].Business_Cost = F[16].Economy_Cost + 14000;

    strcpy(F[17].Flight_Number,"LH7994");
    strcpy(F[17].Flight_Company,"Lufthansa");
    strcpy(F[17].Source,"BERLIN");
    strcpy(F[17].Destination,"DELHI");
    strcpy(F[17].Flight_Type,"International");
    F[17].Date_Of_Journey.day = 15;
    F[17].Date_Of_Journey.month = 11;
    F[17].Date_Of_Journey.year = 2023;
    strcpy(F[17].Departure_Time,"18:20");
    strcpy(F[17].Arrival_Time,"04:45");
    strcpy(F[17].Duration,"10:25");
    F[17].Economy_Seats_Available = 15;
    F[17].Business_Seats_Available = 1;
    F[17].Economy_Cost = 70999;
    F[17].Business_Cost = F[17].Economy_Cost + 14000;


}

class Passenger_Details
{
    char First_Name[20];
    char Last_Name[20];
    char Gender;
    int Age;
    char Passport_Number[10];
public:
    int Seats;
    void Get_Passenger_Details();
    int Check_Passport_Validity();
};

void Passenger_Details::Get_Passenger_Details()
{
    cout << "Enter Passenger's First Name: ";
    cin >> First_Name;
    cout << "Enter Passenger's Last Name: ";
    cin >> Last_Name;
    cout << "Enter Passenger's Gender (M = Male, F = Female): ";
    cin >> Gender;
    cout << "Enter Passenger's Age: ";
    cin >> Age;
    cout << "Enter Passenger's Passport Number: ";
    cin >> Passport_Number;
}

int Passenger_Details::Check_Passport_Validity()
{
    int counter3=0;
    int len=strlen(Passport_Number);
    for(int i=1;i<len;i++)
    {
        if(isdigit(Passport_Number[i]))
            counter3++;
    }
    if(isalpha(Passport_Number[0])&&(counter3==7)&&(len==8))
    {
        cout<<"\nThe given Passport Number is Valid, you may continue.\n"<<endl;
        return(0);
    }
    else
    {
        cout<<"\nThe given Passport Number is Invalid. You shall not pass.\n"<<endl;
        return(1);
    }
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
    cout << "Enter the number of Passengers: ";
    cin >> Seats;
}

void Ticket_Booking::Checking_Database_And_Final_Booking(Flight_Details F[])
{
    int counter1=0;
    char flight_choice;
    int seat_choice;
    for(int i=0;i<17;i++)
    {
        if((strcmp(F[i].Source,User_Source)==0)&&(strcmp(F[i].Destination,User_Destination)==0))
        {
            cout<<"The flight "<<F[i].Flight_Number<<" of the company "<<F[i].Flight_Company<<" exists between the locations "<<F[i].Source <<" and "<<F[i].Destination<<endl;
            cout<<"\n\n";
            cout<<"Details of the Flight: "<<F[i].Flight_Number<<endl;
            cout<<"Type of Flight: "<<F[i].Flight_Type<<endl;
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

            cout<<"Would you like to book this flight? \n(press y/n, for yes or no respectively)"<<endl;
            cin>>flight_choice;
            if (flight_choice=='y')
            {
                Seat_Choosing:

                cout<<"Would you like to book: \n 1. Economy Class \n 2. Business Class"<<endl;
                cin>>seat_choice;
                if(seat_choice==1)
                {
                    if(F[i].Economy_Seats_Available<Seats)
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
                    F[i].Economy_Seats_Available-=Seats;
                    cout<<"Economy Class Seat booked in: "<<F[i].Flight_Number<<endl;
                    cout<<"Price: "<<F[i].Economy_Cost*Seats<<endl;
                    break;
                }
                else if(seat_choice==2)
                {
                    if(F[i].Business_Seats_Available<Seats)
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
                    F[i].Business_Seats_Available-=Seats;
                    cout<<"Business Class Seat booked in: "<<F[i].Flight_Number<<endl;
                    cout<<"Price: "<<F[i].Business_Cost*Seats<<endl;
                    break;
                    }
                }
                else
                {
                    cout<<"Please input a valid choice"<<endl;
                }
            }
            else if(flight_choice=='n')
            {
                continue;
            }
        }
        else
        {
            counter1++;
        }
    }
    if(counter1==9)
    {
        cout<<"\n\nSorry no flights available.\n\n"<<endl;
    }
}

class Routes:public Flight_Details
{
public:
    void Table_Printing(Flight_Details F[]);
    void Print_Database(Flight_Details F);
};

void Routes::Print_Database(Flight_Details F)
{
    cout<<setw(6)<<F.Flight_Number;
    cout<<setw(20)<<F.Flight_Company;
    cout<<setw(15)<<F.Flight_Type;
    cout<<setw(15)<<F.Source;
    cout<<setw(15)<<F.Destination;
    cout<<setw(15)<<F.Departure_Time;
    cout<<setw(15)<<F.Arrival_Time;
    cout<<setw(15)<<F.Duration;
}

void Routes::Table_Printing(Flight_Details F[])
{
    cout<<setw(6)<<"Flight";
    cout<<setw(20)<<"Company";
    cout<<setw(15)<<"Type";
    cout<<setw(15)<<"Source";
    cout<<setw(15)<<"Destination";
    cout<<setw(15)<<"Departure";
    cout<<setw(15)<<"Arrival";
    cout<<setw(15)<<"Duration";
    cout<<endl;

    for(int i=0;i<17;i++)
    {
        Print_Database(F[i]);
        cout<<endl;
    }
}

class Ticket_Cancellation:public Passenger_Details
{
public:
    char Cancelled_Flight_Number[7];
    int Seat_Type;
    void Get_Journey_Details(Flight_Details F[]);
    void Checking_Database_And_Cancelling_Ticket(Flight_Details F[]);
};

void Ticket_Cancellation::Get_Journey_Details(Flight_Details F[])
{
    Get_Passenger_Details();
    cout<<"Enter the Flight Number: ";
    cin>>Cancelled_Flight_Number;
    cout<<"Enter seat type (1 for 'Economy', 2 for 'Business'): ";
    cin>>Seat_Type;
}

void Ticket_Cancellation::Checking_Database_And_Cancelling_Ticket(Flight_Details F[])
{
    int counter2=0;
    for(int i=0;i<9;i++)
    {
        if(strcmp(F[i].Flight_Number,Cancelled_Flight_Number)==0)
        {
            switch(Seat_Type)
            {
            case 1:
                cout<<"The Booking for Flight Number: "<<F[i].Flight_Number<<" has been cancelled"<<endl;
                F[i].Economy_Seats_Available+=Seats;
                cout<<"Amount: "<<F[i].Economy_Cost*Seats-1000<<" has been refunded."<<endl;
                cout<<"A cancellation fee of 1000Rs has been applied."<<endl;
                break;
            case 2:
                cout<<"The Booking for Flight Number: "<<F[i].Flight_Number<<" has been cancelled"<<endl;
                F[i].Business_Seats_Available+=Seats;
                cout<<"Amount: "<<F[i].Business_Cost*Seats-1000<<" has been refunded."<<endl;
                cout<<"A cancellation fee of 1000Rs has been applied."<<endl;
                break;
            default:
                cout<<"Please choose a valid option."<<endl;
            }
        }
        else
        {
            counter2++;
        }
    }
    if(counter2==9)
    {
        cout<<"The Flight Number entered is invalid"<<endl;
    }
}

int main()
{
    Flight_Details F[9];
    Database(F);
    int Menu_Choice;
    cout<<"--------------------------------------------MENU-----------------------------------------------------"<<endl;
    cout<<"What action would you like to take? \n1. Booking. \n2. Routes. \n3. Cancellation."<<endl;
    cin>>Menu_Choice;
    switch(Menu_Choice)
    {
    case 1:
        Ticket_Booking TB;
        TB.Get_Journey_Details(F);
        if(TB.Check_Passport_Validity())
        {
            break;
        }
        for(int i=0;i<(TB.Seats-1);i++)
        {
            TB.Get_Passenger_Details();
            if(TB.Check_Passport_Validity())
            {
                break;
                break;
            }
        }
        TB.Checking_Database_And_Final_Booking(F);
        break;
    case 2:
        Routes R;
        R.Table_Printing(F);
        break;
    case 3:
        Ticket_Cancellation TC;
        TC.Get_Journey_Details(F);
        if(TC.Check_Passport_Validity())
        {
            break;
        }
        TC.Checking_Database_And_Cancelling_Ticket(F);
        break;
    default:
        cout<<"Invalid Input, please input a valid menu choice"<<endl;
    }
    return(0);
}
