/*
 * Praktikum 1
 *
 * Alexander Manger 754969
 * Maciej Krzyszton 756037
 *
*/

#include "travelagency.h"
#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;

TravelAgency::TravelAgency()
{

}
void TravelAgency::readFile(){
fstream bookingFile;
string text;
cout << "Enter path to bookings.txt" <<endl;
string path;
cin >> path;
bookingFile.open(path);
while(!bookingFile.eof()){

    getline(bookingFile, text);
    stringstream ss;
    ss << text;
    getline(ss, text, '|');

        if(!text.compare("F")){
        vector<string> inputs;
        for (int i = 0; i<7; i++){
            getline(ss, text, '|');
            inputs.push_back(text);

        }
        FlightBooking flight;
        flight.set(inputs);
        flightBookings.push_back(flight);
    }
    if(!text.compare("R")){
        vector<string> inputs;
        for (int i = 0; i<6; i++){
            getline(ss, text, '|');
            inputs.push_back(text);

        }
        HotelBooking hotel;
        hotel.set(inputs);
        hotelBookings.push_back(hotel);
    }
    if(!text.compare("H")){
        vector<string> inputs;
        for (int i = 0; i<7; i++){
            getline(ss, text, '|');
            inputs.push_back(text);

        }
        RentalCarReservation car;
        car.set(inputs);
        rentalCarReservations.push_back(car);
    }
}

double sum;
int flights = flightBookings.size();
int hotels = hotelBookings.size();
int cars = rentalCarReservations.size();

for(int i = 0; i < flights; i++)
{
    sum += flightBookings.at(i).getPrice();
}
cout << "Es wurden " << flights << " Fluege gebucht zu einem Gesamtpreis von " << sum << endl;
sum = 0;
for(int i = 0; i < hotels; i++)
{
    sum += hotelBookings.at(i).getPrice();
}
cout << "Es wurden " << hotels << " Hotels gebucht zu einem Gesamtpreis von " << sum << endl;
sum=0;
for(int i = 0; i < cars; i++)
{
    sum += rentalCarReservations.at(i).getPrice();
}
cout << "Es wurden " << cars << " Autos gebucht zu einem Gesamtpreis von " << sum << endl;



bookingFile.close();
}
