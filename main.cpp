#include <iostream>
#include <string>
using namespace std;

class FlightDetails
{
    //int availableFlight;
    //int no_of_seats;
    int eco_seats;
    int busi_seats;
    string source;
    string dest;
    class Date
    {
        int day;
        int month;
        int year;
    }   doj;        
    // Both arrival and departure timings are in respective source and destination local times
    string dep;
    string arr;
    float travel_time;
    string plane_number;
    int cost;
};

string l_dest = {"Mumbai", "Delhi", "Bangalore", "Chennai"};
string i_dest = {"London", "Chicago", "Dubai", "Singapore"};
//Every local destination: Lets keep them interconnected

//For international: 
//Lets make a linked list from each source to its destination
//Easy to check later on


//makeDB is just the boring blunt hardcoding
// We might have to change the way we make the database now...........
void makeDB()
{
    int i;
    i=0;                                //1st Flight
    fn[i].eco_seats = 100;
    fn[i].busi_seats = 30;
    fn[i].source.assign("Mumbai");
    fn[i].dest.assign("London");
    fn[i].doj.day = 10;
    fn[i].doj.month = 7;
    fn[i].doj.year = 2023;
    fn[i].dep = "13:45";
    fn[i].arr = "18:30";
    fn[i].travel_time = 9.5;
    fn[i].plane_number = "ABN6758";
    fn[i].cost = 56699;

    i=1;                                //2nd Flight
    fn[i].eco_seats = 100;
    fn[i].busi_seats = 30;
    fn[i].source.assign("Delhi");
    fn[i].dest.assign("London");
    fn[i].doj.day = 10;
    fn[i].doj.month = 7;
    fn[i].doj.year = 2023;
    fn[i].dep = "15:00";
    fn[i].arr = "20:00";
    fn[i].travel_time = 9.75;
    fn[i].plane_number = "ABN6778";
    fn[i].cost = 57699;

    i=2;                                //3rd Flight
    fn[i].eco_seats = 100;
    fn[i].busi_seats = 30;
    fn[i].source.assign("Bangalore");
    fn[i].dest.assign("London");
    fn[i].doj.day = 11;
    fn[i].doj.month = 7;
    fn[i].doj.year = 2023;
    fn[i].dep = "10:30";
    fn[i].arr = "15:15";
    fn[i].travel_time = 9.5;
    fn[i].plane_number = "ABN6738";
    fn[i].cost = 62999;

    i=3;                                //4th
    fn[i].eco_seats = 150;
    fn[i].busi_seats = 40;
    fn[i].source.assign("Mumbai");
    fn[i].dest.assign("Chicago");
    fn[i].doj.day = 10;
    fn[i].doj.month = 7;
    fn[i].doj.year = 2023;
    fn[i].dep = "14:45";
    fn[i].arr = "00:15";
    fn[i].travel_time = 20;
    fn[i].plane_number = "ABU6843";
    fn[i].cost = 95699;

    i=4;                                //5th
    fn[i].eco_seats = 175;
    fn[i].busi_seats = 40;
    fn[i].source.assign("Delhi");
    fn[i].dest.assign("Chicago");
    fn[i].doj.day = 11;
    fn[i].doj.month = 7;
    fn[i].doj.year = 2023;
    fn[i].dep = "00:30";
    fn[i].arr = "10:00";
    fn[i].travel_time = 20.25;
    fn[i].plane_number = "ABU6863";
    fn[i].cost = 123689;

    i=5                                 //6th
    fn[i].eco_seats = 135;
    fn[i].busi_seats = 40;
    fn[i].source.assign("Bangalore");
    fn[i].dest.assign("Chicago");
    fn[i].doj.day = 11;
    fn[i].doj.month = 7;
    fn[i].doj.year = 2023;
    fn[i].dep = "13:30";
    fn[i].arr = "21:00";
    fn[i].travel_time = 20;
    fn[i].plane_number = "ABU6823";
    fn[i].cost = 111199;

    i=6;                               //7th
    fn[i].eco_seats = 115;
    fn[i].busi_seats = 30;
    fn[i].source.assign("Mumbai");
    fn[i].dest.assign("Dubai");
    fn[i].doj.day = 11;
    fn[i].doj.month = 7;
    fn[i].doj.year = 2023;
    fn[i].dep = "16:00";
    fn[i].arr = "18:15";
    fn[i].travel_time = 3.5;
    fn[i].plane_number = "DEM8623";
    fn[i].cost = 18699;

    i=7;                                //8th
    fn[i].eco_seats = 120;
    fn[i].busi_seats = 35;
    fn[i].source.assign("Delhi");
    fn[i].dest.assign("Dubai");
    fn[i].doj.day = 11;
    fn[i].doj.month = 7;
    fn[i].doj.year = 2023;
    fn[i].dep = "20:15";
    fn[i].arr = "22:15";
    fn[i].travel_time = 3.75;
    fn[i].plane_number = "DEM8643";
    fn[i].cost = 16599;

    i=8;                                //9th
    fn[i].eco_seats = 175;
    fn[i].busi_seats = 40;
    fn[i].source.assign("Bangalore");
    fn[i].dest.assign("Dubai");
    fn[i].doj.day = 12;
    fn[i].doj.month = 7;
    fn[i].doj.year = 2023;
    fn[i].dep = "3:45";
    fn[i].arr = "5:45";
    fn[i].travel_time = 3.5;
    fn[i].plane_number = "DEM8603";
    fn[i].cost = 15999;
};

void acceptDet(char journeyType)
{
    //journeyType = 'L' ---> Local          = 'I'----> International
    cout << "Origin location:\t";
    cin >> origin;
    cout << "Destination location:\t";
    cin >> dest;
    /*Here we'll add the search code 
        whether a flight is offered from origin---> destination     */
    //IF FLIGHT IS NOT OFFERED......
        cout << "We do not offer flight on this route";
        goto mainmenu;
    //IF FLIGHT IS OFFERED........
    cout << "We offer flight on this route\n\n";
    cout << "Which seat do you want\n\t
                1.Business\n\t
                2.Economy\n\n";
    cin >> seat;
    cout << "How many seats are you looking for....";
    cin >> no_seats;
    cout << "Price: 0";
    //IF SEATS ARE AVAILABLE.....
    confirmation:
    cout << "\n\nDo you want to confirm this ticket(y/n)\n";
    cin << confirm;
    if(confirm == 'y')  {
        cout << "Ticket confirmed";
        return;
    }
    else if(confirm == 'n') {
        cout << "Ticket not booked";
        return;
    }
    else{
        cout << "Enter valid choice";
        goto confirmation;
    }
}
//system("cls");

int main()
{ 
    FlightDetails fn[18];
    makeDB(fn);      //Hard Coding it
    string name, origin, dest;
    int number, depdate, date, month, year;
    int price;
    int options;
    MainMenu:
    cout<<endl<<"Press 1 for Booking"
	    <<endl<<"Press 2 for Routes"
	    <<endl<<"Press 5 for Exit";
    int choice, seat, no_seats;
    char confirm;
    char passportNum[20];
    cin >> choice;

    switch(choice)
    {
        case 1: cout << "<----------BOOKING---------->\n";
                cout << "Enter your name\n";                //2 word name
                //acceptName()      
                cout << "Enter phone number\n";
                cin >> number;
                cout << "Enter departure date as ddmmyyyy\n";
                cin >> depdate;

            location:
                cout<<endl<<"1.Local Destination\n2.International Destination\n3.Main Menu\n4.Exit\n";
                cin >> options;
                switch(options)
                {
                    case 1: cout << "These are the local destinations we offer our flights\n";
                            for(int i=0; i<4; i++)
                                cout << l_dest[i] << "\n";
                            cout<<"\n\n";
                            acceptDet('L');
                            goto MainMenu;
                            break;
                    case 2: cout << "Enter passport number\n";
                            cin >> passportNum;                   
                            cout << "\n\nThese are the international destinations on offer\n";
                            for(int i=0; i<4; i++)
                                cout << i_dest[i] << "\n";
                            cout<<"\n\n";
                            acceptDet('I');
                            goto MainMenu;
                            break;
                    case 3: goto MainMenu;
                            break;
                    case 4: cout << "Thank you for choosing our platform\nHoping to see you back";
                            exit(0);
                            break;
                    default: cout << "Enter a valid choice\n";
                             goto location;
                             break;
                }
                break;
        case 2: //ROUTES
                break;
        case 5: cout << "Thank you for choosing our platform\nHoping to see you back";
                exit(0);
                break;
        default: cout << "Enter a valid choice\n";
                goto MainMenu;
                break;
    }
    return 0;
}