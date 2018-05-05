/*
 * Praktikum 2
 *
 * Alexander Manger 754969
 * Maciej Krzyszton 756037
 *
*/

#include "travelagency.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include "flightbooking.h"
#include <array>
using namespace std;

TravelAgency::TravelAgency()
{

}
void TravelAgency::readFile(){
fstream bookingFile;
string text;
bookingFile.open("C:/repos/Praktikum/bookings.txt");
while(!bookingFile.eof()){

    getline(bookingFile, text);
    stringstream lineStream;
    lineStream << text;
    getline(lineStream, text, '|');
    string type = text;
    vector<string>input;
    for (int i = 0; i<7;i++){
        getline(lineStream, text, '|');
        input.push_back(text);
       }
    long bookingId = stol(input.at(0));
    double price = stod(input.at(1));
    string fromDate = input.at(2);
    string toDate = input.at(3);
    long travelId = stol(input.at(4));
    long customerId = stol(input.at(5));
    string customerName = input.at(6);

    if(!type.compare("F")){
        getline(lineStream, text, '|');
        string fromDest = text;
        getline(lineStream, text, '|');
        string toDest = text;
        getline(lineStream, text, '|');
        string airline = text;

        Booking* booking = new Booking();
        cout << "booking erstellt";

        if(!this->findBooking(bookingId)){
            booking->set(bookingId, price, travelId, fromDate, toDate);
            cout<<"booking gefüllt";
            this->allBookings.push_back(booking);
        }else{
            booking = this->findBooking(bookingId);
        }

        cout << "booking geprüft";

        FlightBooking* flight = new FlightBooking();
        flight->set(bookingId, price, fromDate, toDate, travelId, fromDest, toDest, airline);

        cout << "flight erstellt";

        Travel* travel = new Travel();
        if(!this->findTravel(travelId)){
            travel->set(travelId, customerId);
            this->allTravels.push_back(travel);
        }else{
            travel = this->findTravel(travelId);
        }
        cout << "travel geprüft";
        travel->addBooking(booking);

        Customer* customer = new Customer();

        if(!this->findCustomer(customerId)){
            customer->set(customerId, customerName);
            this->allCustomers.push_back(customer);
        }else{
            customer = this->findCustomer(customerId);
        }

        customer->addTravel(travel);

        cout << "booking und flight und customer und travel erstellt";

    }

    if(!type.compare("R")){
        vector<string>input;
        cout <<endl<< "R ";
        for (int i = 0; i<10;i++){
            getline(lineStream, text, '|');
            input.push_back(text);
            cout << text;
        }
    }
    if(!type.compare("H")){
        vector<string> input;
        cout <<endl<< "H ";
        for (int i = 0; i<9;i++){
            getline(lineStream, text, '|');
            input.push_back(text);
            cout << text;
        }
    }
}
bookingFile.close();
}
Booking* TravelAgency::findBooking(long id){
    for(int i = 0; i < allBookings.size(); i++){
        if(allBookings.at(i)->getId() == id){
            return allBookings.at(i);
        }
    }
    return NULL;
}
Customer* TravelAgency::findCustomer(long id){
    for(int i = 0; i < allCustomers.size(); i++){
        if(allCustomers.at(i)->getId() == id){
            return allCustomers.at(i);
        }
    }
    return NULL;
}
Travel* TravelAgency::findTravel(long id){
    for(int i = 0; i < allCustomers.size(); i++){
        if(allCustomers.at(i)->getId() == id){
            return allTravels.at(i);
        }
    }
    return NULL;
}

